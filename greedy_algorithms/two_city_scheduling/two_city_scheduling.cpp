#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;


int main()
{
    int n,a,b;
    vector <pair <int,int>> costs;
    vector <pair <int,int>> results;
    cout << "Enter the number of candidates :: ";
    cin >> n;

    while (n--)
    {
        cin >> a >> b;
        costs.push_back(make_pair(a,b));
    }
    
    for (int i = 0;i < costs.size();i++)
        results.push_back(make_pair((b-a),i));
    sort(results.begin(),results.end());

    cout << "The dudes who get to go to A are" << endl;
    for (int i = 0;i < costs.size()/2;i++)
        cout << results[i].second << endl;

    cout << "The dudes who get to go to B are" << endl;
    for (int i = costs.size()/2;i < costs.size();i++)
        cout << results[i].second << endl;
}