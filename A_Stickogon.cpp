#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
int solve(int n)
{
    vector<int> ar(n);
    map<int, int> mp;
    for(int i=0; i<n; i++)
    {
        cin >> ar[i];
    }
    sort(ar.begin(), ar.end());
    int polygon = 0;
    for(int i=0; i<n; i++)
    {
        mp[ar[i]]++;
        if(mp[ar[i]] == 3)
        {
            polygon++;
            mp[ar[i]] = 0;
        }
    }
    
    return polygon;
}
int main()
{
    int tc;
        cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;

        cout << solve(n) <<'\n';
    }
    return 0;
}