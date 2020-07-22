#include <iostream>

using namespace std;

int main()
{
	int n,m,count = 0;
	cout << "Enter the number currently on display:: ";
	cin  >> n;
	cout << "Enter the number to be displayed  :: ";
	cin  >> m;

	while (m > n)
	{
		if (m%2 == 0)
		{
			cout << "m is even " << m << endl;
			m = m/2;
			
		}
		else 
		{
			cout << "m is odd " << m << endl;
			m++;
		}
		count++;
	}

	cout << "The number of moves made till now is" << count << " and m is " << m << endl;
	cout << count + n - m;
}
