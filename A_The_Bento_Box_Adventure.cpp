#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
int main()
{
    int ar[4];
    map<int, int> mp;
    for(int i=0; i<4; i++)
    {
        cin >> ar[i];
        mp[ar[i]]++;
    }
    for(int i=1; i<=5; i++)
    {
        if(mp[i] == 0)
            cout << i <<'\n';
    }
    return 0;
}