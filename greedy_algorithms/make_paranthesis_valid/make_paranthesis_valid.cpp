#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int l=0,r=0;
    string s;
    cout << "Enter the string to parse";
    cin >> s;

    for (int i = 0;i < s.size();i++)
    {
        switch (s[i])
        {
            case '(' :  cout << "Encountered (" << endl;
                        l++;
                        break;
            case ')' :  cout << "Encountered )" << endl;
                        if (l > 0)
                        {
                            cout << "\tBalancing " << endl;
                            l--;
                        }
                        else 
                        {
                            cout << "new deficit";
                            r++;
                        }
                        break;
        }
    }
    cout << l+r;




}