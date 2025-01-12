#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define siuu ios_base :: sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define pb push_back
#define var vector<int> ar
#define Yes cout << "YES\n"
#define No cout << "NO\n"
void solve()
{
    int n, a, b;
    cin >> n >> a >> b;
    if ((a - b) % 2 == 0) Yes;
    else No;
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