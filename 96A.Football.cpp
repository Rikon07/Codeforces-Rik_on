#include<bits/stdc++.h>
using namespace std;
int main()
{
    string team;
    cin >> team;
    int i, player=1;
    for(i=0; i<team.size(); i++)
    {
        if(team[i] == team[i+1])
            player++;
        else
            player=1;

        if(player == 7)
            break;
    }
    if(player == 7)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}
