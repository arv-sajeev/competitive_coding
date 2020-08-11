#include <iostream>
#include <functional>
#include <string>
#include <utility>
#include <unordered_map>

using namespace std;

// You could make a generic hash for a pair
template <class T1,class T2>
class pair_hash
{
	public:
		size_t operator() (const pair <T1,T2> &pair) const
		{
			return hash<T1>()(pair.first) ^ hash<T2>()(pair.second);
		}
};

int main()
{
	int n,p;
	string s;
	hash <int> int_hash;
	hash <string> string_hash;
	pair_hash <int,string> int_string_hash;
	pair_hash <int,int> int_int_hash;

	cout << "Enter a integer :: ";
	cin  >> n;
	cout << "Enter a string :: ";
	cin  >> s;
	cout << "Hash for the int is :: " << int_hash(n) << endl;
	cout << "Hash for the string is :: " << string_hash(s) << endl;
	cout << "Hash for the pair of int and string :: " <<  int_string_hash(make_pair(n,s));
	cout << "Enter one more integer :: ";
	cin  >> p;
	cout << "Hash for n and p is :: " << int_int_hash(make_pair(n,p)) << " Hash for p and n is :: " << int_int_hash(make_pair(p,n)) << endl;

	// The unordered map uses a hash function for allocating it into the map
	// the hash is defined for most primitive types for types like pair you will have to define your own

	unordered_map <pair <int,int>,int,pair_hash<int,int>> pair_to_int_map;
	pair_to_int_map.insert(make_pair(make_pair(1,2),3));
	cout << pair_to_int_map[make_pair(1,2)];
}

















