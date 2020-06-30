#include <iostream>
#include <vector>
#include <string>

using namespace std;
void print_sol(string &str,vector <int> &sol)
{
	int s = 0;
	int l;
	for (auto i : sol)
	{
		l = i -s;
		cout << str.substr(s,l+1) << endl;
		s = i+1;
	}

}
int main()
{
	int i,ones,zeros;
	vector <int> sol;
	string s;
	cout << "Enter the string :: ";
	cin >> s;
	ones = 0;
	zeros = 0;
	for (i = 0;i < s.size();i++)
	{
		if (s[i] == '1')
			ones++;
		if (s[i] == '0')
			zeros++;
		if (ones == zeros)
		{
			sol.push_back(i);
			ones 	= 0;
			zeros 	= 0;
		}
	}
	print_sol(s,sol);
}
