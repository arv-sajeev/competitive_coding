#include <iostream>
#include <vector>
#include <utility>

using namespace std;

inline int
max(int a,int b)
{
	return (a > b) ? a:b;
}

void print_table(vector <vector <int>> &table,string msg)
{
	cout << "Printing the table :: " << msg << endl;
	for (auto row : table)
	{
		for (auto item : row)
			cout << item << " ";
		cout << endl;
	}
}




int main()
{
	int n,max_w;
	vector <pair <int,int>> items;
	cout << "Enter the number of items :: ";
	cin  >> n;

	while (n--)
	{
		int w,p;
		// Make a list of the items
		cin >> w >> p;
		items.push_back(make_pair(w,p));
	}

	cout << "Enter the max permissible weight :: ";
	cin >> max_w;

	// Make a table to solve this bottom up probably shouldn't use a vector for this
	vector <vector <int>> table(items.size(),vector <int>(max_w+1,0));
	for (int i = 0;i < items.size();i++)
	{
		for (int w = 0;w <= max_w;w++)
		{
			if (i == 0 || w == 0)
			{
				if (items[i].first <= w)
				{
					table[i][w] = items[i].second;
					cout << "\t\tFilling a first item move" << endl;
					continue;
				}
				table[i][w] = 0;
				continue;
			}

			int wo_curr = table[i-1][w];
			int m;
			if (items[i].first <= w)
			{	
				int w_curr = items[i].second + table[i-1][w-items[i].first];
				cout << "\tMove is possible" << endl;
				m = max(wo_curr,w_curr);
				if (m == w_curr)
					cout << "\t\tGood move" << endl;
			}

			else
			{
				m = wo_curr;
				cout << "\tMove not possible" << endl;
			}
		
			table[i][w] = m;
		}

	}
	print_table(table,"Final");
	cout << "The answer is " << table[items.size()-1][max_w] << endl;
}
