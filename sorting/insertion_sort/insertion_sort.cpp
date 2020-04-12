#include <iostream>
#include <vector>
#include <string>

using namespace std;

void print_vector(vector <int> &v,string msg)	{
	cout << "In print_vector" << msg << endl;
	for (int i = 0;i < v.size();i++)	{
		cout << v[i] << " ";
	}
	cout << endl;
}



void insertion_sort(vector <int> &v)	{	
	for (int i = 0;i < v.size();i++)	{
		int k = v[i];
		int j = i-1;
		while(j >= 0)	{
			if (v[j] <= k)	{
				break;
			}
			v[j+1] = v[j];
			j--;
		}
		v[j+1] = k;
		print_vector(v,"in insertion_sort");
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
	print_vector(v,"Initial vector");
	insertion_sort(v);
	print_vector(v,"Sorted vector");


}
