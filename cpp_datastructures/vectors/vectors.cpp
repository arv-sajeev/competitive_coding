#include <iostream>
#include <typeinfo>
#include <string>
#include <vector>
#include <algorithm>


using namespace std;

template <typename Type>
void print_vec(vector <Type> &v,string msg){
	cout << "\nIn print_vec (" << typeid(v).name() << ") " << msg << endl;
	for (auto x:v)	{
		cout << x << " ";
	}
	cout << endl;
	cout << "---------Stats----------";
	cout << "\nSize : " << v.size() << "\ncapacity : " << v.capacity() << "\n------------------------\n";
}

int main()	{
	int n,x;
	// Different types of intializing a vector
	vector <int> a(10);
	a.push_back(2);
	vector <string> s(10,"adarsh");
	s.push_back("Poopy");
	vector <float> f{1.6,2.3,4.5};
	f.push_back(2.789);

	// Showing the difference between size() and capacity
	print_vec(a,"In the int vector");
	print_vec(s,"In the string vector");
	print_vec(f,"In the float vector");

	// When filled it doesnt exten the vector but reallocates it completely
	for (int i = 0;i < 10;i++)	{
		a.push_back(i);
		print_vec(a,"Demo for extension");
	}
	
	// reserve to preallocate memory and save us from the overhead for realocation when capacity is reached
	a.reserve(50);
	print_vec(a,"After preallocation");
	
	// Shrink the vector to only the used ones to save memory 
	
	a.shrink_to_fit();
	print_vec(a,"After shrinking to fit");

	// Clear the vector
	a.clear();
	print_vec(a,"After clearing");

	//inserting different ways 
	
	auto it = a.begin();
	a.insert(it,5,20);
	print_vec(a,"after first insert");
	int arr[] = {1,2,3,4};
	a.insert(it+2,arr,arr+4);
	print_vec(a,"after second insert");
	cout << "The count of 20 in a is " << count(a.begin(),a.end(),20);
	a.erase(it,it + a.size());
	print_vec(a,"Cleared");
}
