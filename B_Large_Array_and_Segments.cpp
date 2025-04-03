#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define siuu ios_base :: sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define pb push_back
#define var vector<int> ar

void solve()
{
    int n, k;
    ll x;
    cin >> n >> k >> x;

    var(n);
    ll sum = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> ar[i];
        sum += ar[i];
    }

    vector<int> pre(n+1, 0);
    for(int i=1; i<=n; i++)
    {
        pre[i] = pre[i-1] + ar[i-1];
    }

    ll res = 0;
    for(int i=1; i<=n; i++)
    {
        int l = i, r = n, ans = -1;

        while(l <= r)
        {
            int m = (l+r) / 2;
            if(pre[m] - pre[i-1] >= x)
            {
                ans = m;
                r = m - 1;
            }
            else
            {
                l = m + 1;
            }
        }

        if(ans != -1)
        {
            res += (ll)(k - (ans-1) / n);
        }
        else
        {
            if(sum > 0)
            {
                ll copies = (x - (pre[n] - pre[i-1]) + sum - 1) / sum;
                if(copies < k) 
                {
                    res += k - copies;
                }
            }
        }
    }

    cout << res <<'\n';
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