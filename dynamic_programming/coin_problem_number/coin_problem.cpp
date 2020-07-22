#include <iostream>
#include <vector>
#include <unordered_map>
#include <utility>
#include <climits>

using namespace std;

int solve(int x,vector <int>& coins,unordered_map <int,int> &memo)
{
	int ret;
	if (x == 0)
	{
		cout << "Bottomed at a solution" << endl;
		return 1;
	}
	if (x < 0)
		return 0;
	ret = 0;
	if (memo.find(x) == memo.end())
	{
		for (int &coin : coins)
		{
			if ((x - coin) >= 0)
				ret += solve(x-coin,coins,memo);
		}
		memo.insert(make_pair(x,ret));;
	}
	else
		ret = memo[x];
	return ret;
}

int main()
{
	int n,x,y;
	vector <int> coins;
	unordered_map <int,int> memo;

	cout << "Enter the number of coins :: ";
	cin >> n;
	cout << "Enter the coins :: " << endl;
	while (n--)
	{
		cin >> x;
		coins.push_back(x);	
	}
	memo.insert(make_pair(0,0));
	cout << "Number to make change of :: ";
	cin >> x;
	y = solve(x,coins,memo);
	cout << "The solution is" << y;
}
