#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define siuu ios_base :: sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define Yes cout << "Yes\n"
#define No cout << "No\n"
void solve()
{
    int l, r, d, u;
    cin >> l >> r >> d >> u;
    if(l == r && d == u && l == d)
    {
        Yes;
        return;
    }
    No;
}
int main()
{
    int tc;
        cin >> tc;
    while(tc--)
    {
        solve();
    }
    return 0;
}