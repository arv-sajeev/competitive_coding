#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>


using namespace std;

void print_vec(vector <int> &v)
{
	cout << "Print vector :: ";
	for (auto i : v)
		cout << i << " ";
	cout << endl;
}

int main()
{
	int n,s;
	vector <int> v;
	cout << "Enter the size of the array";
	cin  >>  n;
	while (n--)
	{
		int x;
		cin >> x;
		v.push_back(x);
	}
	sort(v.begin(),v.end());
	print_vec(v);

	/// First find the first negative position and use two pointers two move from outward from it to either end
	int neg = 0,pos;
	while(v[neg] < 0)
		neg++;
	pos = neg+1;
	while ( neg >= 0 && pos < v.size() )
	{
		if ( abs(v[neg]) < abs(v[pos]) )
		{
			cout << v[neg]*v[neg] << " ";
			neg--;
		}
		else
		{
			cout << v[pos]*v[pos] << " ";
			pos++;
		}

	}

	while ( neg >= 0 )
	{
		cout << v[neg]*v[neg] << " ";
		neg--;
	}

	while ( pos < v.size() )
	{	
			cout << v[pos]*v[pos] << " ";
			pos++;
	}
}
