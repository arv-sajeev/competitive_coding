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

template<typename type>
void permutations(vector <type> &v,vector <type> &a,vector <bool> &c)	
{	
	if (a.size() ==  v.size())	
	{	
		print_perm(a,"Here is a permutation");
	}
	for (int i = 0;i < v.size();i++)
	{
		if (c[i] == true)	
			continue;
		a.push_back(v[i]);
		c[i] = true;
		permutations(v,a,c);
		a.pop_back();
		c[i] = false;

	}
}


int main()	
{
	int n;
	string x;	
	vector <string> a,v;
	cin >> n;
	while (n--)	
	{
		cin >> x;
		v.push_back(x);
	}

	vector <bool> c(v.size(),false);
	permutations(v,a,c);
	return 0;
}


