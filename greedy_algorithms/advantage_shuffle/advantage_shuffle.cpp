#include <iostream>
#include <queue>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;


void print_vec(vector <int> &v,string msg)
{
	cout << msg << endl;
	for (auto &i : v)
		cout << i << " ";
	cout << endl;
}
int main()
{
	int n;
	vector <int> a,b;
	auto comp = [](pair <int,int>&a ,pair<int,int> &b) { return a.first < b.first;};
	priority_queue <pair <int,int>,vector <pair <int,int>>,decltype(comp) > pq(comp);
	cout << "Enter the size of arrays ::";
	cin  >> n;
	vector <int> ans(n);
	cout << "Enter the values of A and B at index i ::" << endl;

	while (n--)
	{
		int x,y;
		cin >> x >> y;
		a.push_back(x);
		b.push_back(y);
	}
	
	// sort a
	sort(a.begin(),a.end());
	cout << "Sorting complete" << endl;
	// store b's elements and indices 
	// we could also just check  which element in a is just above each element in b
	// and assign but this seems better
	for (int i = 0;i < b.size();i++)
		pq.push(make_pair(b[i],i));
	if (pq.empty())
		cout << "The queue is empty ya'll" << endl;
	else
		cout << "priority queue creation complete" << pq.size() <<  endl;
	int i = 0,j = a.size()-1;
	
	while (!pq.empty())
	{
		pair <int,int> b_val = pq.top();
		pq.pop();
		cout << "Inspecting b_val :: " << b_val.first << 
			" That has index :: " << b_val.second << endl;
		if (b_val.first <  a[j])
		{
			ans[b_val.second] = a[j];
			j--;
		}
		else 
		{
			ans[b_val.second] = a[i];
			i++;	
		}
	}

	print_vec(ans,"Here is the answer biaatch");
	
	
}
