#include <iostream>
#include <string>
#include <set>
#include <iterator>
#include <algorithm>
#include <typeinfo>


using namespace std;
template <typename Type>
void print_multiset(multiset <Type> &ms,string msg)	{
	cout << "\nIn print_multiset "<< typeid(ms).name() << " " << msg << endl; 	
	for (auto i : ms)	{
		cout << i << " ";
	}
	cout << endl;
}



int main ()	{
	multiset <int> v{1,2,3,4,5,6,7,8,9,8,7,6,5,4,3,2,1,2,3,2,1,2,3,4,3,2,2,1};
	print_multiset(v,"Hi there");
	// erase val removes all occurences of that val we can also erase base on the position with iter pointing to that positio
	v.erase(2);
	print_multiset(v,"After erasing 2");
	cout << v.count(3);
}

