#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define siuu ios_base :: sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define Yes cout << "YES\n"
#define No cout << "NO\n"
void solve(int n, int m)
{
    vector<ll> ar(n);
    ll val;
    for(int i=0; i<n; i++)
    {
        cin >> ar[i];
    }
    cin >> val;
    if((is_sorted(ar.begin(), ar.end())) || n == 1)
    {
        Yes;
        return;
    }

    bool x = true, y = true;
    ll cur = ar[0], agerDiff = val - ar[0], cur1, porerDiff;

    for (int i = 1; i < n; i++)
    {
        cur1 = ar[i], porerDiff = val - ar[i];
        bool x1 = false, y1 = false;
        
        if(x && cur <= cur1) 
            x1 = true;
        if(y && agerDiff <= cur1) 
            x1 = true;

        if(x && cur <= porerDiff) 
            y1 = true;
        if(y && agerDiff <= porerDiff) 
            y1 = true;

        if(!x1 && !y1)
        {
            No;
            return;
        }

        x = x1, y = y1;
        cur = cur1, agerDiff = porerDiff;
    }
    Yes;
}
int main()
{
    siuu;
    int tc;
        cin >> tc;
    while(tc--)
    {
        int n, m;
        cin >> n >> m;
        solve(n, m);
    }
    return 0;
}