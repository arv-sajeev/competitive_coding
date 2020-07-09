#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

bool comp(pair <int,int>& a,pair <int,int>& b)
{
	if (a.first == b.first)
		return a.second > b.second;
	return a.first > b.first;
}

void print_vec(vector <pair<int,int>> &v,string msg)
{
	cout << "In print_vec " << msg << endl;
	for (auto &t : v)
	{
		cout << t.first << " " << t.second << endl;
	}
	cout << endl;

}



int main()
{
	int n,shots;
	vector <pair <int,int>> balloons;
	cout << "Enter the number of balloons :: ";
	cin  >> n;
	while (n--)
	{
		int s,e;
		cout << "Enter balloon coordinates :: ";
		cin >> s >> e;
		balloons.push_back(make_pair(s,e));
	}
	print_vec(balloons,"Original array");
	sort(balloons.begin(),balloons.end(),comp);
	print_vec(balloons,"After sorting");
	shots = 1;
	for (int i = 0,curr_pos = balloons[0].first;i < balloons.size();i++)
	{
		if (curr_pos <= balloons[i].second)
			continue;
		shots++;
		curr_pos = balloons[i].first;
	}
	cout << shots++;
}
