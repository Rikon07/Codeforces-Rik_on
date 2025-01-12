#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, Anton=0, Danik=0;
    cin >> n;
    char games[n];
    cin >> games;
    for(i=0; i<n; i++)
    {
        if(games[i] == 'A')
            Anton++;
        else if(games[i] == 'D')
            Danik++;
    }
    if(Anton > Danik)
        cout << "Anton\n";
    else if(Danik > Anton)
        cout << "Danik\n";
    else
        cout << "Friendship\n";
    return 0;
}
