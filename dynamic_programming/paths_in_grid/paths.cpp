#include <iostream>
#include <vector>

using namespace std;

inline int 
max(int a,int b)
{
	return (a > b) ? a:b;
}

int solve(vector <vector <int>> &grid,vector <vector <int>> &memo,int i,int j)
{
	int h_move=0,v_move=0;	
	if (memo[i][j] == -1)
	{
		if (i > 0)
			v_move = grid[i][j] + solve(grid,memo,i-1,j);
		if (j > 0)
			h_move = grid[i][j] + solve(grid,memo,i,j-1);
		memo[i][j] = max(h_move,v_move);
		return memo[i][j];
	}
	else {
		return memo[i][j];
	}

}


int main()
{
	int n;
	cout << "Enter the square grid size :: ";
	cin >> n;

	vector <vector <int>> grid(n,vector <int>(n,0));
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < n;j++)
		{
			cout << "Enter val at [" << i << "][" << j << "] ::"; 
			cin >> grid[i][j];
		}
	}

	vector <vector <int>> memo(n,vector <int>(n,-1));
	memo[0][0] = grid[0][0];
	cout << "The solution is " << solve(grid,memo,n-1,n-1) << endl;
	

}
