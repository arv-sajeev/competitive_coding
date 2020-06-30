#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstdlib>

using namespace std;
void 
print_vector(vector <int> &v,string msg)	
{	
	cout << "\nIn print_vector " << msg << endl;
	for (auto j : v)
	{
		for (int i = 0;i < v.size();i++)	
		{
			if (i == j)	
			{
				cout << "* ";
				continue;
			}
			cout << "- ";
		}
		cout << endl;
	}
	cout << endl;

}

bool is_attack(vector <int> &v,int n,int d)	
{
	for (int i = 0;i < d;i++)
	{
		if (v[i] == n)
			return true;
		if (abs(v[i] - n) == abs(i -d))
			return true;
	}
	return false;
}

void
n_queens(vector <int> &board,int d)	
{
	if (d == board.size())
	{	
		print_vector(board,"Here's a solution");
	}
	for (int i = 0;i < board.size();i++)
	{
		//Check columns
		if(is_attack(board,i,d))	
			continue;
		board[d] = i;
		n_queens(board,d+1);
		
	}
}


int 
main()	{
	
	int n;
	cout << "Enter dimensions of the board";
	cin >> n;
	vector <int> board(n);
	n_queens(board,0);
}
