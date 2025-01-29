#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define siuu ios_base :: sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define pb push_back
#define var vector<int> ar
void solve(int n)
{
    var(n);
    for(int &health: ar)
    {
        cin >> health;
    }
    sort(ar.begin(), ar.end());
    ll ans = 0;
    int curr = 0, bef = 0;
    for(int i=0; i<n; i++)
    {
        curr = min(ar[i], bef+1);
        ans += (ar[i] - curr);
        bef = curr;
    }
    cout << ans << '\n';
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