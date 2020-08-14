#include <iostream>
#include <vector>
#include <string>

using namespace std;

void print_table(vector < vector <int> > &table,string msg)
{
	cout << "In print_table " << msg << endl;
	for (vector <int> &row : table)
	{
		for (int &item : row)
			cout << item << " ";
		cout << endl;
	}
	cout << endl;
}
int main()
{
	int n,value;
	vector <int> coins;
	cout << "Enter the number of coins :: ";
	cin  >> n;

	while (n--)
	{
		int coin;
		cin >> coin;
		coins.push_back(coin);
	}
	cout << "Enter the value :: ";
	cin  >> value;
	vector <vector <int>> table(coins.size()+1,vector <int> (value+1,0)); 
	for (int curr = 0;curr < coins.size()+1;curr++)
	{
		for (int val = 0;val < value+1;val++)
		{
			if (curr == 0)
			{
				table[curr][val] = 0;
				if (val == 0)
					table[curr][val] = 0;
				continue;
			}
			if (val == 0)
			{
				table[curr][val] = 1;
				continue;
			}
			int w_curr = 0,wo_curr;
			wo_curr = table[curr-1][val];
			if (coins[curr-1] <= val)
				w_curr = table[curr][val - coins[curr-1]];
			table[curr][val] = wo_curr + w_curr;
			
		}
	}
	print_table(table,"Final");
	cout << "The answer is :: " << table[coins.size()][value] << endl;
}


