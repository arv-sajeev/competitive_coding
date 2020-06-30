#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>

using namespace std;

void print_vec(vector <int> &vec)
{
	cout << "print_vec" << endl;
	for (auto i : vec)
	{
		cout << i << " ";
	}
	cout << endl;
}

int main()
{
	vector <int> s;
	int i,n,ret;
	cout << "Enter size of array :: ";
	cin >> n;
	
	while (n--)
	{
		cin >> i;
		s.push_back(i);
	}

	sort(s.begin(),s.end(),greater <int> ());
	// accumulate is like reduce in python 
	n = accumulate(s.begin(),s.end(),0);
	ret = 0;
	for (i = 0;i < s.size() && ret <= n;i++)
	{
		ret 	+= s[i];
		n	-= s[i];
		cout << "The sum is : " << ret << endl;
		cout << "The index is : " << i << endl;
	}
	cout << i;
	vector <int> ans(s.begin(),s.begin()+i);
	print_vec(ans);
}
