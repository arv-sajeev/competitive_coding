#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
void print_vec(vector <int> &vec,string msg)
{
	cout << "In print_vec " << msg << endl;
	for (auto &i : vec)
		cout << i << " ";
	cout << endl;

}
class Next_permutation 
{
	int size;
	vector <int> items;

	public :
		Next_permutation(int n)
		{
			size = n;
		}

		vector <int> operator() ()
		{
			if (items.empty())
			{
				for (int i = 0;i < size;i++)
					items.push_back(i);
				print_vec(items,"First try");
				return items;
			}
			cout << "Not empty" << endl;
			int i = size - 2; // Second last element
			// Find the first point decrease occurs when traversing from right
			
			
			while (items[i] > items[i+1] && i >= 0)
			{
				if (i == 0)
				{
					return items;	// Last permutation 
				}
				i--;
			}	
			cout << "Found first decreasing occurrence" << items[i] << " " << items[i+1] << endl;
		
			// Find the next largest number in the tail

			int j = size - 1;
			while(items[i] > items[j])
				j--;
			int swap;
			swap 		= items[i];
			items[i]	= items[j];
			items[j]	= swap;

			i++;
			j = size -1;
			while (items[i] > items[j])
			{
				swap 		= items[i];
				items[i]	= items[j];
				items[j]	= swap;
				i++;
				j--;
				// It's reverse sorted so just flip it up
			}
			print_vec(items,"the next one");
			return items;
		}
};




int main()
{
	int n;
	cout << "Enter the size of items";
	cin  >> n;
	Next_permutation gen = Next_permutation(n);
	for (int i = 0;i < 10;i++)
		gen();

}
