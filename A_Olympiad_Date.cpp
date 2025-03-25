#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define siuu ios_base :: sync_with_stdio(false); cin.tie(0); cout.tie(0)

void solve(int n)
{
    vector<int> cnt(10, 0);
    vector<int> need = {3, 1, 2, 1, 1};
    int req[5] = {0, 1, 2, 3, 5};
    int ans = 0;
    bool fnd = false;
    for (int i=1; i<=n; i++)
    {
        int d;
        cin >> d;
        cnt[d]++;
        if(!fnd)
        {
            bool ok = true;
            for(int j = 0; j < 5; j++)
            {
                if(cnt[req[j]] < need[j])
                {
                    ok = false;
                    break;
                }
            }
            if (ok)
            {
                ans = i;
                fnd = true;
            }
        }
    }
    cout << ans << "\n";
}
int main()
{
    siuu;
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
