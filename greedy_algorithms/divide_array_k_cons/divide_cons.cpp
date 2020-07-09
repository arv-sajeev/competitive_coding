#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <string>
#include <iterator>

using namespace std;

void print_map(map <int,int> &map,string msg)
{
	cout << "In print_map " << msg << endl;
	for (auto t = map.begin();t != map.end();t++)
	{
		cout << t->first << " " << t->second << endl;
	}

}

int main()
{
	int n,k;
	map <int,int> freq;
	cout << "Enter the size of the array :: ";
	cin  >> n;
	cout << "Enter subsequence size :: ";
	cin  >> k;
	if (n%k != 0)
	{
		cout << "Not possible";
		return 0;
	}
	
	for (int i = 0;i < n;i++)
	{	
		int x;
		cin >> x;
		freq[x]++;
	}
	print_map(freq,"Original freq chart");

	while (n)
	{
		int min = (freq.begin())->first;
		cout << "New subsequence starting from :: " << min << endl;
		print_map(freq,"during traversal");
		for (int i = 0;i < k;i++)
		{
			cout << "\t Searching for :: " << min+i << endl;
			cout << "\t frequency is  :: " << freq[min+i] << endl;
			if (freq[min+i] > 0)
			{
				cout << "\t\t Found :: " << min+i << endl;
				freq[min+i]--;
				if (freq[min+i] == 0)
				{
					freq.erase(freq.find(min+i));
				}	
				n--;
				cout << "stuff left to do is " << n << endl;
			}

			else
			{
				cout << "Not possible";
				return 0;
			}
		}
	}
	cout << "Possible" << endl;


}
