#include <iostream>
#include <vector>
#include <utility>
#include <unordered_map>
#include <functional>

using namespace std;

/**************************
 *
 * 	int solve
 * 	rem_w 		- is the remaining wait left
 * 	curr	- is the item that is being curr in this call
 * 	items		- is the array with item weights and prices
 * 	memo		- memoizes the solution for rem_w,curr pairs
 *
 **************************/

// Implementing a hash for pair to use in unordered map
class int_pair_hash
{
	public:
		size_t operator()(const pair <int,int>& p) const
		{
			return hash<int>()(p.first) ^ hash<int>()(p.second);
		}
};

int solve_kp(int rem_w,int curr,vector < pair <int,int> > &items,unordered_map <pair<int,int>,int,int_pair_hash> &memo)
{
	int max;
	pair <int,int> key = make_pair(rem_w,curr);
	// if out of search space or constraints return 0
	if (rem_w <= 0 || curr >= items.size())
		return 0;
	// Search if a memoized solution for subproblem exists
	
	if (memo.find(key) == memo.end())
	{
		int w_curr,wo_curr;
		wo_curr = solve_kp(rem_w,curr+1,items,memo);
		// Check if including curr is possible move
		if (items[curr].first > rem_w)
			max = wo_curr;
		else 
		{
			// If possible then the solution is the max of with and without current
			w_curr = solve_kp(rem_w-items[curr].first,curr+1,items,memo) + 	
				 items[curr].second;
			max = (w_curr > wo_curr) ? w_curr : wo_curr;
		}
		// Memoize the solution we got
		memo.insert(make_pair(key,max));
	}

	else
		max = memo[key];
	return max;
}

int main()
{
	int n,rem_w;
	vector <pair <int,int>> items;
	unordered_map <pair<int,int>,int,int_pair_hash> memo;
	cout << "Enter the number of items ::" ;
	cin  >> n;

	while (n--)
	{
		int w,p;
		cout << "Enter the weight and then price :: ";
		cin >> w >> p;
		items.push_back(make_pair(w,p));
	}

	cout << "Enter the maximum weight";
	cin >> rem_w;
	cout << "The max profit given constraints is ::" << solve_kp(rem_w,0,items,memo);

}


















