#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main()
{
    int n,k;
    priority_queue <pair <int,int> > groups;
    cout << "Enter the team size";
    cin >> n;
    for (int i = 0;i < n;i++)
    {
        cin >> k;
        groups.push(make_pair(k,i));
    }
    while (!groups.empty())
    {
        pair <int,int> val;
        int size;
        cout << "Here's a group" << endl;
        val = groups.top();
        cout << val.second << " ";
        size = val.first-1;
        groups.pop();
        while (size--)
        {
            val = groups.top();
            cout << val.second << " ";
            groups.pop();
        }
    }
}