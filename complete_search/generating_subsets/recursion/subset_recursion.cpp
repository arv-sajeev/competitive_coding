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
void subset(int depth,vector <type> &v,vector <type> a)	{
	if (depth == v.size())	{
		print_subset(a,"You bottomed out here's a subset");
		return;		// At this point we have traversed the entire set
				// made all the decisions whether to include or not
				// there will be 2 choices at each position 
				// so 2 ^ n
	}
	subset(depth+1,v,a);	// Here find more subsets that do not include the element
			   	// that is at depth
	a.push_back(v[depth]);
	subset(depth+1,v,a);
				// now more subsets that have the element at depth
}


int main()	{
	int n;
	string x;
	vector <string> v;
	vector <string> a;

	cin >> n;
	
	while (n--)	{
		cin >> x;
		v.push_back(x);
	}
	a.push_back(" ");

	subset(0,v,a);
}
