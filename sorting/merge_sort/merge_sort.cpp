#include <iostream>
#include <string>
#include <vector>


using namespace std;

void print_vector(vector <int> &v,string msg)	{
	cout << "\nIn print_vector\n " << msg;
	for (int i = 0;i < v.size();i++)	{
		cout << v[i] << " ";
	}
	cout << endl;
}

void merge(vector <int> &v,int l,int m,int h)	{
	vector <int> temp;
	cout << "In merge" << l << h;
	
	int i = l,j = m+1;
	while (i <= m && j <= h){ 
		if (v[i] <= v[j])	
			temp.push_back(v[i++]);
		else 
			temp.push_back(v[j++]);
	}

	while (i <= m)
		temp.push_back(v[i++]);
	while (j <= h)
		temp.push_back(v[j++]);
	print_vector(temp,"temporary in merge");
	for (i = 0;i <= (h-l);i++)	{
		v[i+l] = temp[i];
	}
}

void merge_sort_h(vector <int> &v,int l,int h)	{
	if (l<h)	{
		int mid = (l+h)/2;
		merge_sort_h(v,l,mid);
		merge_sort_h(v,mid+1,h);
		merge(v,l,mid,h);
		print_vector(v,"in merge_sort_h");
	}
       return;	
}


void merge_sort(vector <int> &v){
	merge_sort_h(v,0,v.size()-1);
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
	print_vector(v,"Initial vector");
	merge_sort(v);
	print_vector(v,"Sorted vector");
}
