#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <typeinfo>



using namespace std;
template<typename type>
void print_perm(vector <type> &v,string msg)	
{
	cout << "\nIn print_perm " << typeid(v).name() << " " << msg << endl;
	for (auto i : v)	
	{
		cout << i << " ";
	}
	cout << endl;
}

/* *********************
 *
 * 	A bit about how to calculate a factoradic from a decimal number 
 * 	- in binary we continuously divide by 2 and the remainder is taken as the ith digit for the binary representation  
 *	- instead of powers of the same base we use the factorial of the digit at each digit here is an example
 *		10
 *				Q		R		
 *		10 / 1		10		0
 *		10 / 2		5		0
 *		5  / 3		1		2
 *		1  / 4		0		1
 *
 *		So our representation will turn out to be
 *		1 2 0 0 which when expanded becomes 1*3! + 2*2! + 0*1!+ 0*0!
 *						     6	 +  4	+  0  +  0
 *
 *		so we repeatedly divide with the digits starting from 1
 *
 *		450
 *				Q		R
 *		450 / 1		450		0
 *		450 / 2		225		0
 *		225 / 3		75		0
 *		75  / 4		18		3
 *		18  / 5		3		3
 *		3   / 6		0		3
 *		
 *		3 3 3 0 0 0 becomes our factoradic which expands to 3 * 5! + 3 * 4! + 3 * 3! + 0*2! + 0*1! + 0*0!
 *								     360   +   72   +   18   
 *	- the follwing function takes a number and converts it into factoradic base,the return is given as a vector for ease of implementation  
 *	- putting the numbers with LSB towards left so place value increases from left to right
 *
 * *********************/


vector <int> factoradics(int n)
{
	int i = 1;
	int q,r;

	vector <int> fac;

	while ( n != 0)	
	{
		r = n%i;
		fac.push_back(r);
		n = n/i;
		i++;
	}		
	
	return fac;

}
		
		

template<typename type>
void permutation(vector <type> v,int n)
{
	int x;
	vector <type> ret;
	if (n < 0)	
	{
		cout << "n is out of range\n";
		return;
	}
	vector <int> fac = factoradics(n);
	cout << "\nsize of v   " << v.size();
	cout << "\nSize of fac " <<  fac.size();
	if ((fac.size() > v.size()))	
	{
		cout << "n is out of range\n";
		return;
	}

	print_perm(fac,"Factoradic expression");	
	int diff = v.size() - fac.size();
	for (int i = 0;i < diff;i++)
	{
		cout << "correcting " << i << endl;
		fac.push_back(0);
	}
	print_perm(fac,"Zero corrected Factoradic expression");	
	
	for (int i = fac.size()-1;i >= 0;i--)
	{
		x = fac[i];
		ret.push_back(v[x]);		
		v.erase(v.begin() + x);	
	}
	
	print_perm(ret,"Here's your permutation");
	
}




int main()	
{
	int n;
	string x;	
	vector <string> v;
	cout << "Enter the # elements in the set :: ";
	cin >> n;
	cout << "Enter the elements ::\n";
	while (n--)	
	{
		cin >> x;
		v.push_back(x);
	}
	while(1)	
	{
		cout << "n ?	::";
		cin >> n;
		permutation(v,n);
	}
}


