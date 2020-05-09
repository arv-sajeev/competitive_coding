#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <typeinfo>



using namespace std;
template<typename type>
void print_perm(vector <type> &v,string msg)	
{
	cout << "\nIn print_perm " << typeid(v).name() << " " << msg << endl;
	for (auto i : v)	
	{
		cout << i << " ";
	}
	cout << endl;
}

int factoradics(int n)	{
	int i = 1;
	int ret = 0;
	while(n)	{
		int r = n%i;
		
		

template<typename type>
void permutation(vector <type> &v,int n)
{

	
}




int main()	
{
	int n;
	string x;	
	vector <string> v;
	cout << "Enter the # elements in the set :: "
	cin >> n;
	cour << "Enter the elements ::\n";
	while (n--)	
	{
		cin >> x;
		v.push_back(x);
	}
	while(1)	
	{
		cout << "n ?	::"l
		cin >> n;
		permutation(v,n);
	}
}


