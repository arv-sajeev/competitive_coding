#include <iostream>
#include <vector>
#include <algorithm>

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
	cout << "Enter the target sum";
	cin >> s;
	int i = 0,j = v.size()-1;
	// Iterate till the pointers cross
	while(i < j)
	{
		if ( (v[i] + v[j]) == s )
		{
			cout << v[i] << " " << v[j];
			break;
		}
		// Go up the array if smaller
		else if ( (v[i] + v[j]) < s)
			i++;
		// Go down the array if larger
		else 
			j--;
	}
	
	
}
