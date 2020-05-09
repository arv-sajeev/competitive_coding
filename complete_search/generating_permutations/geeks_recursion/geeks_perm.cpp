#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <typeinfo>



using namespace std;
void print_perm(vector <int> &v,string msg)	
{
	cout << "\nIn print_perm " << typeid(v).name() << " " << msg << endl;
	for (auto i : v)	
	{
		cout << i << " ";
	}
	cout << endl;
}

void permutations(vector <int> &v,int l,int r)	
{
	if (l == r-1)	
	{
		print_perm(v,"Here is a permutation");
		return;
	}

	for (int i = l;i < r;i++)
	{
		int t = v[i];
		v[i] = v[l];
		v[l] = t;
		permutations(v,l+1,r);
		t = v[i];
		v[i] = v[l];
		v[l] = t;
	}

}



int main()	
{
	int n;
	int x;	
	vector <int> a,v;
	cin >> n;
	while (n--)	
	{
		cin >> x;
		v.push_back(x);
	}
	permutations(v,0,v.size());
	return 0;
}


