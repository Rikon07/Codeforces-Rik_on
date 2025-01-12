#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define siuu ios_base :: sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define pb push_back
#define var vector<ll> ar

void solve()
{
    int n;
    ll x, y;
    cin >> n >> x >> y;

    var(n);
    ll sum = 0;
    for (int i=0; i<n; i++) 
    {
        cin >> ar[i];
        sum += ar[i];
    }
    sort(ar.begin(), ar.end());

    ll l = sum-y, r = sum-x, pairs = 0;

    for(int i=0; i<n; i++) 
    {
        ll target1 = l - ar[i];
        ll target2 = r - ar[i];

        auto low = lower_bound(ar.begin() + i+1, ar.end(), target1);
        auto high = upper_bound(ar.begin() + i+1, ar.end(), target2);

        pairs += (high-low);
    }
    cout << pairs << '\n';
}
int main()
{
    siuu;
    int tc;
        cin >> tc;
    while(tc--)
    {
        solve();
    }
    return 0;
}