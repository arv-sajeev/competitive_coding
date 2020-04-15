#include <iostream>
#include <string>
#include <vector>

using namespace std;


void print_vec(vector <int> &v,string msg)	{
	cout << "\nIn print_vec " << msg << endl;
	for (int i = 0;i < v.size();i++)	{
		cout << v[i] << " ";
	}
	cout << endl;

}


int partition(vector <int> &v,int l,int h)	{
	int p = v[h],pos = l,t;
	for (int i = l;i <= h;i++)	{
		print_vec(v,"In partition");
		if (v[i] < p)	{
			t = v[pos];
			v[pos] = v[i];
			v[i] = t;
			pos++;
		}	

	}
	v[h] = v[pos];
	v[pos] = p;
	return pos;
}




void quick_sort_h(vector <int> &v,int l,int h)	{
	cout << "\nIn quick_sort_h with " << l << " " << h;
	if (l < h)	{
		int p = partition(v,l,h);
		string msg = "pivot is" + to_string(p);
		print_vec(v,msg);
		quick_sort_h(v,l,p-1);
		quick_sort_h(v,p+1,h);
	}
	return;

}

void quick_sort(vector <int> &v)	{
	quick_sort_h(v,0,v.size()-1);
}

int main()	{
	int n,x;
	vector <int> v;
	cin >> n;
	while (n > 0)	{
		cin >> x;
		v.push_back(x);
		n--;
	}
	
	print_vec(v,"Intial vector");
	quick_sort(v);
	print_vec(v,"Sorted vector");
}

