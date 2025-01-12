#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define siuu ios_base :: sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define pb push_back
#define var vector<int> ar
#define Yes cout << "YES\n"
#define No cout << "NO\n"
void solve(int n)
{
    vector<ll> ar(n+1), br(n+1), cr(n+1);
    for(int i=1; i<=n; i++)
    {
        cin >> ar[i];
    }
    for(int i=1; i<=n; i++)
    {
        cin >> br[i];
    }
    ll ans = 0;
    for(int i=1; i<=n; i++)
        {
            cr[i] = ar[i] - br[i];
            if(cr[i] < 0) ans -= cr[i];
        }
        bool flag = true;
        for(int i=1; i<=n; i++)
        {
            if(cr[i] < 0 && ans > abs(cr[i])) 
                flag = false;
            if(cr[i] >= 0 && cr[i] < ans) 
                flag = false;
        }
        (flag) ? Yes : No;
}
int main()
{
    siuu;
    int tc;
        cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;
        solve(n);
    }
    return 0;
}