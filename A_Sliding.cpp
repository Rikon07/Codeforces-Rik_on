#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
ll solve()
{
    ll n, m, r, c;
        cin >> n >> m >> r >> c;
    
    ll Manhattan_distance = m-c + (n-r)*(m-1) + (n-r)*m;
    
    return Manhattan_distance;
}
int main()
{
    int tc;
        cin >> tc;
    while(tc--)
    {
        cout << solve() <<'\n';
    }
    return 0;
}