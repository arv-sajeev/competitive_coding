#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n,e;
	vector <int> v;
	cout << "Enter the number of elements :: ";
	cin  >> n;

	while (n--)
	{
		cin >> e;
		v.push_back(e);
	}
	e = 0;
	for (auto i : v)
	{
		if (i %2 == 0)
			e++;
	
	}
	n = (e < (v.size() - e) ? e : (v.size() -e));
	cout << "The answer is" << n << endl;
	



}
