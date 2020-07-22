#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void print_vec(vector <int> &v,string msg)
{
	cout << "In print_vec " << msg << endl;
	for (auto &i : v)
		cout << i << " ";
	cout << endl;

}
int main()
{
	int n;
	vector <int> v;
	cout 	<< "Enter the size of the set :: ";
	cin 	>> n;

	while (n--)
	{	
		int x;
		cin >> x;
		v.push_back(x);
	}

	int i = v.size()-2;
	while (i >= 0 && v[i] <= v[i+1])
	{
		if (i == 0)
		{
			print_vec(v,"Already at the lowest permutation");
			return 0;
		}
		i--;
	}
	cout << "Ascending found at :: " << i << " " << v[i] << " " << v[i+1];

	int j = v.size() - 1 ;
	while (v[j] >=  v[i])
		j--;
	int temp 	= v[i];
	v[i] 		= v[j];
	v[j]		= temp;
	
	print_vec(v,"Previous perm with single swap");

}
