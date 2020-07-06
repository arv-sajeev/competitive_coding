#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

class Trip
{
	public:
		int size;
		int start;
		int end;
		// Constructor
		Trip(int size,int start,int end)
		{
			this->size 	= size;
			this->start  	= start;
			this->end	= end;
		}	
		// comparison operator
		bool operator < (const Trip& other)
		{
			return this->start < other.start;
		}
};

int main()
{
	int n;
	vector <Trip> trips;
	map <int,int> stops;
	cout << "Enter the number of trips :: ";
	cin >> n;
	while (n--)
	{
		int size,start,end;
		cin >> size >> start >> end;
		trips.push_back(Trip(size,start,end));
	}
	cout << "Enter the capacity of the car :; ";
	cin >> n;

	// using sort is overkill we don't need to sort(trips.begin(),trips.end());
	for (Trip& trip : trips)
	{
		stops[trip.start] += trip.size;
		stops[trip.end]   -= trip.size;
	}
	
	for (auto &stop : stops)
	{
		n -= stop.second;
		if (n < 0)
		{	
			cout << "Not possible";
			return 0;
		}
	} 
	cout << "Possible";
	return 0;
}
