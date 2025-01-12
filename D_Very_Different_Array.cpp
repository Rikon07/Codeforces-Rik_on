#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll solve(int n, int m)
{
    vector<ll> a(n), b(m);
    int i;
    for (i = 0; i < n; i++)
        cin >> a[i];
    for (i = 0; i < m; i++)
        cin >> b[i];
        
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    vector<ll> prefA(n), prefB(m), suffA(n), suffB(m);
        
    prefA[0] = a[0];
    for(i=1; i<n; i++) prefA[i] += a[i]+prefA[i-1];
        
    prefB[0] = b[0];
    for(i=1; i<m; i++) prefB[i] += b[i]+prefB[i-1];
        
    suffA[n-1] = a[n-1];
    for(i=n-2; i>=0; i--) suffA[i] += a[i]+suffA[i+1];
        
    suffB[m-1] = b[m-1];
    for(i=m-2; i>=0; i--) suffB[i] += b[i]+suffB[i+1];
        
    ll ans = 0;
    ans = max(ans, suffB[m-n] - prefA[n-1]);
        
    for(i=1; i<n; i++)
    {
        ll sum = suffA[n-i]+suffB[m-n+i]-prefA[n-i-1]-prefB[i-1];
        ans = max(ans, sum);
    }
    ans = max(ans, suffA[0]-prefB[n-1]);
    return ans;
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n, m, i;
        cin >> n >> m;
        
        cout << solve(n, m) <<"\n";
    }
    return 0;
}