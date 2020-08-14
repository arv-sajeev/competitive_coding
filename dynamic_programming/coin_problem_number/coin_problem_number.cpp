#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>



using namespace std;


int solve(vector <int> &coins,unordered_map <string,int> &memo,int curr,int value)
{
	if (value < 0 || curr < 0)
	{
		return 0;
	}

	cout << "In solve for :: " << value << " considering :: " << curr << endl;

	if (value == 0)
	{
		cout << "\tFound a solution" << endl;
		return 1;
	}
	string key = to_string(curr) + "asdf" + to_string(value);
	int w_curr,wo_curr,ret;
	if (memo.find(key) == memo.end())
	{
		w_curr	= solve(coins,memo,curr,value-coins[curr]);
		wo_curr	= solve(coins,memo,curr-1,value);		
		ret = w_curr + wo_curr;
		cout << "\tFound a new solution :: " << ret << endl;
		memo[key] = w_curr+wo_curr;
	}
	else 
	{
		ret = memo[key];
		cout << "\t\tFound a memoized solution" << ret << endl;
	}
	
	return ret;
	
}

int main()
{
	int n,value;
	vector <int> coins;
	unordered_map <string,int> memo;
	cout << "Enter the number of coins you have :: ";
	cin  >> n;

	while (n--)
	{	
		int coin;
		cout << "Enter a coin :: ";
		cin  >>  coin;
		coins.push_back(coin);
	}
	cout << "Enter the value you wanna change :: ";
	cin  >> value;

	cout << "The solution is" << solve(coins,memo,coins.size()-1,value);
}
