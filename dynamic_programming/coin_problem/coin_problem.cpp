#include <iostream>
#include <vector>
#include <unordered_map>
#include <utility>
#include <algorithm>

using namespace std;

int solve(int x,vector <int>&coins,unordered_map <int,int> &memo)
{
	int ret;
	cout << "In solve for :: " << x << endl;
	ret = 2000;
	if (memo.find(x) == memo.end())
	{
		for (int &coin : coins)
		{
			cout << "\tTrying coin :: " << coin << endl;
			if (x - coin >= 0)
			{
				cout << "\t\tMove possible current candidate is :: " << ret << endl;
				int new_val = solve(x-coin,coins,memo) + 1;
				if (new_val < ret)
				{
					ret = new_val;
					cout << "\t\t\tNew min candidate found for x :: " << x << " is ::" << ret  <<" With coin :: " << coin << endl;
				}
			}
		}
		memo.insert(make_pair(x,ret));
	}

	else 
	{
		cout << "\t memoized solution available" << memo[x] <<  endl;
		ret = memo[x];
	}
	cout << "Solution for :: " << x << " is (" << ret << ")" << endl; 
	return ret;
}

int main()
{
	int n,x,y;
	vector <int> coins;
	unordered_map <int,int> memo;
	cout << "Enter the number of coins ::";
	cin  >> n; 
	cout << "Enter coins :;";

	while (n--)
	{
		cin >> x;
		coins.push_back(x);
	}
	sort(coins.begin(),coins.end(),greater <int>());

	cout << "Enter the value to change :: ";
	cin >> x;
	memo.insert(make_pair(0,0));
	y = solve(x,coins,memo);
	if (y == 2000)
		cout << "Not possible";
	else 
		cout << "The answer is :: " << y;
	y - solve(x,coins,memo);
	if (y == 2000)
		cout << "Not possible";
	else 
		cout << "The answer is :: " << y;
}
