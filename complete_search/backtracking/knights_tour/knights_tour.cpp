#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

void print_board(vector < vector <int> > &board,string msg)	
{
	cout << "\nIn print_board" << msg << endl;
	for (int i = 0; i < board.size();i++)
	{
		for (int j = 0;j < board.size();j++)
		{
			cout << board[i][j] << " ";
		}
		cout << endl;
	}
}


using namespace std;
static vector<pair <int,int> > moves =	\
{
	{-1,2},
	{-1,-2},
	{1,2},
	{1,-2},
	{2,-1},
	{2,1},
	{-2,-1},
	{-2,1},				
	
};

bool unvisited(vector <vector <int>> &board,int x,int y)
{
	if (board[x][y] == -1)
	{
		return true;
	}
	return false;
}

bool 
in_board(vector < vector <int> > &board,int x,int y)
{
	if (x >= 0 && y >= 0 && x < board.size() && y < board.size())	
	{
		return true;
	}
	return false;
}

bool
knights_tour(vector < vector <int> > &board,int x,int y,int d)
{
	int new_x,new_y;
	if (d == board.size()*board.size())
	{
		print_board(board,"Here is a solution");
		return true;
	}


	for (auto move : moves)
	{
		new_x = x + move.first;
		new_y = y + move.second;

		if (in_board(board,new_x,new_y) && unvisited(board,new_x,new_y))
		{
			board[new_x][new_y] = d;
	
			if (knights_tour(board,new_x,new_y,d+1))
				return true;
			else 
				board[new_x][new_y] = -1;
		}
	}
	return false;
}
  



int main()	
{
	int n;
	cout << "\nEnter size of the board	:";
	cin >> n;
	vector <vector <int>> board(n,vector <int> (n,-1));
	board[0][0] = 0;
	cout << board.size()*board.size();
	knights_tour(board,0,0,1);
}
