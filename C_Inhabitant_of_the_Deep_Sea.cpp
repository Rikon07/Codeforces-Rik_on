#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
int solve(int n, ll k)
{
    vector<int> ar(n);
    ll sum = 0;
    for(int i=0; i<n; i++)
    {
        cin >> ar[i];
        sum += ar[i];
    }
    if(k >= sum)
    {
        return n;
    }
    ll f = 0, s = 0;
    if(k % 2 == 0)
    {
        f = k/2;
        s = k/2;
    }
    else
    {
        f = (k/2) + 1;
        s = k/2;
    }
    for(int i=0; i<n; i++)
    {
        if(f >= ar[i])
        {
            f -= ar[i];
            ar[i] = 0;
        }
        else if(f < ar[i])
        {
            ar[i] -= f;
            f = 0;
        }
        if(f == 0)
            break;
    }
    for(int i=n-1; i>=0; i--)
    {
        if(s >= ar[i])
        {
            s -= ar[i];
            ar[i] = 0;
        }
        else if(s < ar[i])
        {
            ar[i] -= f;
            s = 0;
        }
        if(s == 0)
            break;
    }
    int sink = 0;
    for(int i=0; i<n; i++)
    {
        if(ar[i] == 0)
            sink++;
    }
    return sink;
}
int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        ll k;
        cin >> n >> k;
        
        cout << solve(n, k) <<"\n";
    }
    return 0;
}