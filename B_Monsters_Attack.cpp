#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

string Monsters(ll n, ll k)
{
    vector<ll> mons(n), vec(n);
    vector<ll> ans(n+1, 0);
    ll health = n*k, sum = 0;
    for(ll i=0;i<n;i++)
    {
        cin >> vec[i];
        sum += vec[i];
    }
    for(ll i=0;i<n;i++)
    {
        cin >> mons[i];
        ans[abs(mons[i])] +=vec[i];
    }
    if(health < sum) return "NO";
    ll tmp = k;
    for(ll i=1;i<=n;i++)
    {
        if(tmp < ans[i])
        {
            return "NO";
        }
        tmp -= ans[i];
        tmp += k;
    }
    return "YES";
}
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        ll n, k;
        cin >> n >> k;

        cout << Monsters(n, k) << "\n";
    }
    return 0;
}