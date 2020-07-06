#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

void print_vec(vector <pair <int,int>> &v,string msg)
{
    cout << "In print_vec " << msg << endl;
    for (pair<int,int>& p:v)
    {
        cout << p.first << " " << p.second << endl;
    }
}


bool comp(pair<int,int> &a,pair <int,int> &b)
{
    if (a.first == b.first)
        return a.second < b.second;
    else 
        return a.first < b.first;
}

int main()
{
    int n;
    vector <pair <int,int>> v;
    cout << "Enter the number of elements :: ";
    cin >> n;
    vector <pair <int,int>> ans(n,{-1,-1});
    print_vec(ans,"Here is the answer array");
    while (n--)
    {
        int x,y;
        cin >> x;
        cin >> y;
        v.push_back(make_pair(x,y));
    }
    print_vec(v,"Original array");
    sort(v.begin(),v.end(),comp);
    cout << "Hi" << endl;
    print_vec(v,"Sorted array");
    for (pair<int,int>& s: v)
    {
        int count = s.second;
        for (int i = 0;i < ans.size();i++)
        {
            if (ans[i].first == -1 && count == 0)
            {
                ans[i] = make_pair(s.first,s.second);
                break;
            }
            if (ans[i].first == -1 || ans[i].first == s.first)
                count--;
        }
    }
    print_vec(ans,"Here is the answer");
}