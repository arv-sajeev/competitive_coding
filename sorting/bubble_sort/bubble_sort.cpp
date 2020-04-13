#include <iostream>
#include <vector>
#include <string>

using namespace std;

void print_vector(vector <int> &v,string msg)	{
	cout << "\nIn print vector " << msg << endl;
	for (int i = 0;i < v.size();i++)	{
		cout << v[i] << " ";
	}	
	cout << endl;
}

void bubble_sort(vector <int> &v)	{
	for (int i = v.size()-1;i > 0;i--)	{
		for (int j = 0;j < i;j++)	{
			if (v[j] > v[j+1])	{
				int t = v[j];
				v[j] = v[j+1];
				v[j+1] = t;
			}

		}
		print_vector(v,"progress");
	}
}


int main()	{
	int n,x;
	vector <int> v;
	cin >> n;
	for (int i = 0;i < n;i++)	{
		cin >> x;
		v.push_back(x);
	}
	print_vector(v,"Intial vector");
	bubble_sort(v);
	print_vector(v,"Sorted vector");


}
