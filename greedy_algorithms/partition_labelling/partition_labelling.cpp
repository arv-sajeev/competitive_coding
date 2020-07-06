#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int last_occur[26],end,start;
    string s;
    cout << "Enter the number of elements :: ";
    cin >> s;

    // Find the last occurence of each character
    for (int i = 0;i < s.size();i++)
    {
        last_occur[s[i] - 'a'] = i;
    }

    // Now traverse through the string and find a possible partition 
    start = 0,end = 0;
    for (int i = 0;i < s.size();i++)
    {
        if (end < last_occur[s[i] - 'a'])
            end = last_occur[s[i] - 'a'];
        if (i == end)
        {
            cout << "Here is a partition " << start << " " << end << endl;
            start = end+1;
        }
    }
}