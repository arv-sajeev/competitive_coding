#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

class Book {
	public	:
		Book()	{
			this->rating = 100;
			this->name = "appi";
		}

		Book(int rating,string name)	{
			this->rating = rating;
			this->name =  name;
		}

		bool operator < (const Book& other){
			return this->rating < other.rating;
		}

		int rating;
		string name;

};

void print_vector(vector <Book> &v,string msg)	{
	cout << "\nIn print_vector " << msg << endl;
	for (int i = 0;i < v.size();i++)	{
		cout << "___________________" << endl;
		cout << "\nBook name : " << v[i].name << \n Rating : " << v[i].rating << endl;
		cout << "___________________" << endl;
	}
	cout << endl;

}

int main()	{
	int n,x;
	string name;
	vector <Book> v;
	cin >> n;

	while (n--)	{
		cout << "\nEnter name of book";
		cin >> name;
		cout << "\nEnter rating";
		cin >> x;
		v.push_back(Book(x,name));
	}

	print_vector(v,"Initial vector");
	sort(v.begin(),v.end());
	print_vector(v,"sorted vector");




}
