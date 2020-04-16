#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

void print_vector(vector <int> &v,string msg)	{
	cout << "\nIn print_vector " << msg << endl;
	for (int i = 0;i < v.size();i++)	{
		cout << v[i] << " ";
	}
	cout << endl;

}

int main()	{
	int n,x;
	vector <int> v;
	cin >> n;

	while (n--)	{
		cin >> x;
		v.push_back(x);
	}

	print_vector(v,"Initial vector");
	sort(v.begin(),v.end());
	print_vector(v,"sorted vector");




}
