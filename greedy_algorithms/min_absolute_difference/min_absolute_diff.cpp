#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <utility>


using namespace std;

void print_sol(vector <pair <int,int>>  &vec)
{
	for (auto i : vec)
	{
		cout << i.first << " " << i.second << endl;
	}
	cout << "-----------------------";

}

int main()
{
	int i,n,x;
	vector <int> v;
	vector <pair <int,int>> sol;
	cout << "Enter the number of elements";
	cin >> n;
	while (n--)
	{
		cin >> x;
		v.push_back(x);
	}
	sort(v.begin(),v.end());
	
	// store the max possible difference as the first value
	x = abs(v.begin() - v.end());
	for (i = 0;i < v.size() -1;i++)
	{
		n = abs(v[i] - v[i+1]);
		if (n > x)
		{
			continue;
		}
		if (n < x)
		{
			x = n;
	 		sol.clear();
			cout << "new min found\n";
		}
		sol.push_back(make_pair(v[i],v[i+1]));
	}
	print_sol(sol);
	return 0;
}
