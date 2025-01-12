#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(ll n)
{
    for(int a = 2; a <= n; a++)
    {
        int b = n-a-1;
        if(__gcd(a, b)==1 && a != b)
        {
            cout << a << " " << b << " " << 1 << '\n';
            return;
        }
    }
}
int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        ll n;
        cin >> n;

        solve(n);
    }
    return 0;
}