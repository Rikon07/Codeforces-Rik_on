#include<bits/stdc++.h>
using namespace std;
int main()
{
    int friends[3], i;
    for(i=0; i<3; i++)
    {
        cin >> friends[i];
    }
    sort(friends, friends+3);
    cout << abs(friends[2]-friends[1]) + abs(friends[0]-friends[1]) << "\n";
    return 0;
}

