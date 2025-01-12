#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll coins[] = {15, 10, 6, 3, 1};
ll solve(ll n)
{
    ll ans = 0;
    for(ll i=0; i<5; i++)
    {
        if(n >= coins[i])
        {
            ll t = n/coins[i];
            ans = t;
            n %= coins[i];
            n += coins[i];
            vector<ll> diff(n+1, INT_MAX);
            diff[0] = 0;

            for(ll c=1; c<=n; c++)
            {
                for(ll j=0; j<5; j++)
                {
                    if(coins[j] <= c)
                    {
                        ll x = diff[c-coins[j]];
                        if(x != INT_MAX && x+1 < diff[c])
                            diff[c] = x+1;
                    }
                }
            }
            ans += diff[n];
            return ans-1;
        }
    }
}
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        ll n;
        cin >> n;

        cout << solve(n) <<"\n";
    }
    return 0;
}