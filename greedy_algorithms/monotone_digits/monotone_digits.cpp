#include <iostream>
#include <string>


using namespace std;

int main()
{
	string a;
	int i,j;
	cout << "Enter the number yo :: ";
	cin >> a;

	// Traverse the string find if there is a segment that is not increasing
	// If the string has equal digits uptil now decrement the first one and then break
	for (i = 0,j = 0;i < a.size();i++)
	{
		if (a[i] > a[i+1])
		{
			a[j] -= 1;
			j++;
			break;
		}
		if (a[i] != a[i+1])
			j = i;
	}
	if (i < a.size())
	{
		while (j < a.size())
		{
			a[j] = '9';
			j++;
		}
	}
	cout << a;
	
}
