#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

void 
print_subset(vector <int> &vec)
{
	int i;
	cout << "here is a subset\n";
	for (i = 0;i < vec.size();i++)
	{
		cout << vec[i] << " ";
	}
	cout << endl;
}

void 
subset_sum(int depth,int partial_sum,vector <int> sub_set,vector <int> &set,int sum)
{
	if (depth > set.size())
		return;
	print_subset(sub_set);
	if (partial_sum == sum)
	{
		cout << "here is a valid subset";
		print_subset(sub_set);
		return;
	}
	
	subset_sum(depth+1,partial_sum,sub_set,set,sum);
	sub_set.push_back(set[depth]);
	subset_sum(depth+1,partial_sum+set[depth],sub_set,set,sum);
}

int main()
{
	int n,x,sum,i,ret;
	vector <int> set;
	vector <int> sub_set;
	cout << "Enter number of elements :: ";
	cin >> n;
	
	while (n--)
	{
		cin >> x;
		set.push_back(x);
	}
	
	cout << "Enter the sum :: ";
	cin >> sum;
	sort(set.begin(),set.end());
	x = 0;
	for (auto i : set)
		x += i;
	// constraint #1 the sum of the elements should at least be >= sum
	// constraint #2 the smallest element should be <= sum
	if (x >= sum )
		subset_sum(0,0,sub_set,set,sum);
	else 
		cout << "No valid subsets possible";
}
