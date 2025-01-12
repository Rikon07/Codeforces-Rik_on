#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define Yes cout << "YES\n"
#define No cout << "NO\n"
void solve(int n)
{
    int m;
    vector<ll> a(n), b(n);
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    int unm = 0;
    map<int, int> mp, cnt;
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        if (b[i] != a[i])
        {
            unm++;
            mp[b[i]]++;
        }
    }
    cin >> m;
    vector<int> d(m);
    for (int i = 0; i < m; i++)
    {
        cin >> d[i];
        cnt[d[i]]++;
    }

    sort(b.begin(), b.end());

    if(unm == 0)
    {
        if(binary_search(b.begin(), b.end(), d[m - 1]))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    else
    {
        bool ans = true;
        for(auto [x, y] : mp)
        {
            if (y > cnt[x])
            {
                ans = false;
                break;
            }
        }
        if(!ans)
        {
            No;
        }
        else
        {
            if(binary_search(b.begin(), b.end(), d[m - 1]))
            {
                Yes;
            }
            else
            {
                No;
            }
        }
    }
}
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;

        solve(n);
    }
    return 0;
}