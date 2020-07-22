#include <iostream>
#include <vector>
#include <map>
#include <utility>

using namespace std;

int main()
{
	int n;
	map <char,int> freq;
	multimap <int,char,greater <int>> sorted_freq;

	cout << "Enter the number of characters in your string";
	cin  >> n;
	
	string ans(n,'0');

	// Find frequencies
	for (int i = 0;i < n;i++)
	{
		char x;
		cin >> x;
		freq[x]++;
	}
		
	// Sort based on frequency
	for (auto &i : freq)
	{
		sorted_freq.insert(make_pair(i.second,i.first));
	}
	
	cout << "Finished sorting " << endl;
	for (auto &i : sorted_freq)
		cout << i.second << " " << i.first << endl;

	

	// Fill up the even spaces with the most frequent elements
	auto it = sorted_freq.begin();
	int i = 0,c = it->first;
	
	if (c > n-c+1)
	{
		cout << "Not possible macha";
		return 0;
	}

	while (i < n)
	{
		cout << "Filling even space with " << it->second << " " << it->first  << " times" << endl;
		while (c > 0 && i < n)
		{
			ans[i] = it->second;
			i += 2;	
			c--;
		}
		if (c > 0 && i >= n)
		{
			cout << "Couldn't complete filling in  even spaces " << it->second << " " << c << " times left" << endl;
			break;
		}
		it++;
		c = it->first;
	} 

	i = 1;
	while (i < n)
	{
		cout << "Filling odd space with " << it->second << " " << c << " times" << endl;
		while (c > 0 && it->second)
		{
			ans[i] = it->second;
			i += 2;
			c--;
		}
		
		if (c > 0 && i < n)
			break;
		it++;
		c = it->first;

	}
	cout << endl << ans;

}
