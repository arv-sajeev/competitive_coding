#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int i,n,prof;
    vector <int> v;
    cout << "Enter the number of days in market :: ";
    cin >> n;
    while (n--)
    {
        cin >> i;
        v.push_back(i);
    }
    prof = 0;
    for (i = 0;i < v.size() - 1;i++)
    {
        if (v[i] < v[i+1])
            prof += v[i+1] - v[i];
    }

    cout << "The profit we made is :: " << prof;
}