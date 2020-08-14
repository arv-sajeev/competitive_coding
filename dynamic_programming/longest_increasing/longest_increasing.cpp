#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

// This one has 0(n^2) complexity but it makes sense

void print_vec(vector <int> &v,string msg)
{
	cout << "In print_vec " << msg << endl;
	for (int i : v)
		cout << i << " " ;
	cout << endl;

} 
int main()
{
	int n,x;
	vector <int> m;
	cout << "Enter the size of the array";
	cin  >> n;
	cout << "Enter array elements" << endl;
	vector <int> memo(n,1);
	auto max = [](int x,int y)
	{
		return (x > y) ? x : y;
	};
	while (n--)
	{
		cin >> x;
		m.push_back(x);
	}

	for (int i = 0;i < m.size();i++)
	{
		for (int j = 0;j < i;j++)
		{
			// Check if the sequence can be extended
			if (m[i] > m[j])
			{
				memo[i] = (memo[i]>(memo[j] + 1))?memo[i]:(memo[j] + 1);
			}
		}
	}
	print_vec(memo,"Final");
	cout << accumulate(memo.begin(),memo.end(),0,max);
}
