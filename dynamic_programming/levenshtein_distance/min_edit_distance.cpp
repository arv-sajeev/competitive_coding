#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>



using namespace std;

inline int 
min(int a,int b)
{
	return (a < b) ? a : b;
}


// Here i is the prefix index of a and j prefix index of b
//
int 
solve(string &a,string &b,unordered_map <string,int> &memo,int i,int j) {

	// Base cases
	if (i == 0)
		return j;
	if (j == 0)
		return i;

	// Make key for hashmap
	string key = to_string(i) + "__|__" + to_string(j);

	// If not in hashmap calculate
	int ret;
	if (memo.find(key) == memo.end())
	{
		if (a[i-1] == b[j-1])
		{
			ret = solve(a,b,memo,i-1,j-1); //No extra cost because this matches.
		}

		else {
			int del,mod,add;
			del = solve(a,b,memo,i-1,j)  	+ 1; // Cost to convert a[0:i] to b[0:j] by deleting a[i]
			mod = solve(a,b,memo,i-1,j-1)	+ 1; // Cost to convert a[0:i] to b[0:j] by modifying a[i] to match b[j]
			add = solve(a,b,memo,i,j-1)	+ 1; // Cost to convert a[0:1] to b[0:j] by adding an extra to the tail to match b[j]
			ret = min(del,min(mod,add));
		}
		memo[key] = ret;
	}
	else 
	{
		ret = memo[key];
	}
	return ret;
}


int main()
{
	string a,b;
	cout << "Enter the first string :: ";
	cin  >> a;
	cout << "Enter the second string :: ";
	cin  >> b;	
	unordered_map <string,int> memo;
	
	cout << "The edit distance is :: " << solve(a,b,memo,a.length(),b.length()) << endl;
}
