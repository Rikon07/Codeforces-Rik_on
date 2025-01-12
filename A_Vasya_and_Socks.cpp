#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
void solve(const int n, const int m)
{
    int ans = n + (n-1) / (m-1);

    cout << ans << '\n';
}
int main()
{
    int n, m;
        cin >> n >> m;
    
    solve(n, m);
    return 0;
}