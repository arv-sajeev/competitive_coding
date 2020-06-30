#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <utility>

using namespace std;

void print_pair_vec(vector <pair <int,int>> &v,string msg)
{
	cout << "Printing " << msg << " vector\n";
	for (auto i : v)
	{
		cout << i.first << " " << i.second << endl;
	}
	cout << "\n----------\n";
}

bool comp(pair <int,int> &a,pair <int,int> &b)
{
	return (a.second < b.second);

}

int main ()
{
	int n,i,s,e;
	vector <pair<int,int>> schedule;
	vector <pair<int,int>> schedule_start;
	cout << "enter number of events";
	cin >> n;

	while (n--)
	{
		cout << "Enter start and end :: ";
		cin >> s >> e;
		schedule.push_back(make_pair(s,e));
	}
	print_pair_vec(schedule,"original");
	schedule_start = schedule;
	sort(schedule.begin(),schedule.end(),comp);
	sort(schedule_start.begin(),schedule.end());
	print_pair_vec(schedule,"end sorted");
	print_pair_vec(schedule_start,"start sorted");
	
}
