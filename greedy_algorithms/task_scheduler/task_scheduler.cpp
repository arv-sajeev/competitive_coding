#include <iostream>
#include <algorithm>
#include <map>
#include <utility>


using namespace std;

int main()
{
	map <char,int> v;
	multimap <int,char,greater <int>> sorted_v;
	int n,k;

	cout << "Enter number of task";
	cin >> n;
	cout << "Enter the cool off period";
	cin >> k;

	while (n--)
	{
		char x;
		cout << "Enter a task";
		cin >> x;
		v[x]++;
	}
	// This part is wrong it only works because A happens to be the largest freq in all case
	// I have to sort the different tasks based on frequency and then get this done
	// so basically sort the map by value either by copying to a vector of pairs and sorting or using a multimap
	for (auto &i : v)
	{
		sorted_v.insert(make_pair(i.second,i.first));
	}
	auto range = sorted_v.equal_range((sorted_v.begin())->first);
	int max 	= sorted_v.begin()->first;
	int count	= distance(range.first,range.second);

	cout << ((max - 1) * (k - count+1)) + count*max;
}
