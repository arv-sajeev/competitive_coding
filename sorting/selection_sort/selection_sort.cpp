#include <iostream>
#include <vector>
#include <string>

using namespace std;

void print_vector(vector <int> &v,string msg)	{
	
	cout << "\nIn print vector " << msg << endl; 

	for (int i = 0;i < v.size() ;i++)	{
		cout << v[i] << " ";
	}
		
	cout << endl;
}

void selection_sort(vector <int> &v)	{
	cout << "\n In selection sort";
	for (int i = 0;i < v.size() ;i++)	{
		int min_pos = i;
		for (int j = i;j < v.size() ;j++)	{
			if (v[j] < v[min_pos])	{
				min_pos = j;
			}
		}
		
		int a = v[min_pos];
		v[min_pos] = v[i];
		v[i] = a;
	}
}


int main ()	{
	int n,x;
	vector <int> v;
	cin >> n;
	for (int i = 0;i < n;i++){
		cin >> x;
		v.push_back(x);
	}
	print_vector(v,"Inital vector");
	selection_sort(v);
	print_vector(v,"Sorted vector");

}
