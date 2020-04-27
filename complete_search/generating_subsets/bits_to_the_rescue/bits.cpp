#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <typeinfo>



using namespace std;
template <typename type>
void print_subset(vector <type> &v,string msg)	{
	cout << "\nIn print_subset " << typeid(v).name() << " " << msg << endl;
	for (auto i : v)	{
		cout << i << " ";
	}
	cout << endl;
}


template <typename type>
void subset(vector <type> &v)	{
	vector <type> a;
	for (int i = 0;i < (1 << v.size());i++)	{
		a.clear();
		for (int j = 0;j < v.size();j++)	{
			if (i & (1 << j))	{
				a.push_back(v[j]);
			}
		}
		print_subset(a,"Here's a subset for you");
	}
}


int main()	{
	int n;
	string x;
	vector <string> v;

	cin >> n;
	
	while (n--)	{
		cin >> x;
		v.push_back(x);
	}
	subset(v);
}
