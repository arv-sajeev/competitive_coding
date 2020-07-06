#include <iostream>
#include <vector>
#include <set>
#include <utility>
#include <cmath>

using namespace std;



int main()
{
    int move_count,obs_count;
    vector <int> moves;
    vector <pair <int,int>> directions = {{0,1},{1,0},{0,-1},{-1,0}}; // Clocwise movement 
    set<pair<int,int>> obstacles;

    cout << "Enter the number of moves :: ";
    cin  >> move_count;

    cout << "Enter the number of obstacles :: ";
    cin  >> obs_count;

    cout << "Enter the moves :: ";
    while (move_count--)
    {
        int x;
        cin >> x;
        moves.push_back(x);
    }

    cout << "Enter the obstacles :: ";
    while (obs_count--)
    {
        int x,y;
        cin >> x >> y;
        obstacles.insert(make_pair(x,y));

    }
    int dir = 0,x = 0,y = 0,max;        // Starting in the north direction 

    for (int &move :moves)
    {
        switch (move)
        {
            case -2:    // Clockwise
                        dir = (dir+1)%4;
                        break;
            case -1:    // Anti-clockwise can't do -1 since mod of negative is weird so adding 3 instead i.e n-1 where is n is the mod 4
                        dir = (dir+3)%4;
                        break;
            default:
                        while (move > 0 && 
                        (obstacles.find(make_pair(x+directions[dir].first,y+directions[dir].second)) 
                        == obstacles.end()))
                        {
                            x += directions[dir].first;
                            y += directions[dir].second;
                            max = (max > (x*x + y*y))? max : (x*x + y*y);
                            move--;
                        }

        }
    }
    cout << "The maximum distance is " << sqrt(max) ;
}