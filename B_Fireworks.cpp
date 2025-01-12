#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll solve(ll a, ll b, ll m)
{
    ll choclate = m/a;
    ll ataish = m/b;

    return choclate+ataish+2;
}
int main()
{
    int tc;
        cin >> tc;
    while(tc--)
    {
        ll a, b, m;
        cin >> a >> b >> m;
        
        cout << solve(a, b, m) <<"\n";
    }
    return 0;
}