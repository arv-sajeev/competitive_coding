#include <iostream>
#include <vector>
#include <queue>
#include <numeric>

using namespace std;

int main()
{
    priority_queue <int,vector <int>,greater <int>> pq;
    int n,k,i,sum;

    cout << "Enter the number of elements :: ";
    cin >> n;
    cout << "Enter the number of negations :: ";
    cin >> k;

    while (n--)
    {
        cin >> i;
        pq.push(i);
    }

    while (k--)
    {
        i = -1*pq.top();
        pq.pop();
        pq.push(i);
    }
    sum = 0;
    while (!pq.empty())
    {
        sum += pq.top();
        pq.pop();
    }
    cout << "The max sum is :: " << sum;
}