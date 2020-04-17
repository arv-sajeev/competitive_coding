#include <iostream>
#include <set>
#include <string>
#include <algorithm>


using namespace std;

/*	Sets are containers that store unique elements in a sorted order 
 *		- the key of set also identifies it
 *		- the value of elements it a container cannot e modified once in the container 
 *		- they can be inserted or removed
 *		- they are usually implemented as binary search trees 
 *		- associative, ordered, unique keys
 */
class Book {
	public :
	Book(string name,int rating)	{
		this->name = name;
		this->rating = rating;
	}
	string name;
	int rating;

	bool operator< (const Book &other) const {
		return this->rating <  other.rating;

	}
};

int main()	{
	set <int> a{1,2,3,4,1,2,3,4,1,2,3,4,3,2,1,2,3,4,3,2,1};
	for (auto i :a)	{
		cout << i;
	}
	
	set <Book> books;
	books.insert(Book("adarsh poopy",23));
	books.insert(Book("adarsh paapy",76));
	books.insert(Book("adarsh peepy",2));
	books.insert(Book("adarsh piipy",3));
	books.insert(Book("adarsh puupy",12));
	for (auto i : books)	{
		cout << "\n-------------------------------\n";
		cout << "\n Name : " << i.name << endl;
		cout << "\nRating : " << i.rating << endl;
		cout << "\n-------------------------------\n";
	}
	auto it = books.lower_bound(Book("",12));
	cout << it->name;
}
