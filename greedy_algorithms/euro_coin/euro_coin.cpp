#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n,i;
	// Coin available in euro (in cents)
	vector <int> coins 	= {1,2,5,10,20,50,100,200};
	vector <int> sol	= {0,0,0,0 ,0 ,0 ,0  ,0  };
	cout << "Enter your number :: ";
	cin >> n;
	i = coins.size() - 1;	// start from the back
	while (n > 0 )
	{
		// Find a coin value that is <= n
		while(n < coins[i])
			i--;
		sol[i] 	= n/coins[i];
		n	= n%coins[i];
		
	}

	for (i = 0;i < coins.size();i++)
	{
		cout << coins[i] << " " << sol[i] << endl;
	}

}

