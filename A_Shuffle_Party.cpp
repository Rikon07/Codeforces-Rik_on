#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll solve(ll n)
{
    ll ind = 1;
    while(ind*2 <= n)
    {
        ind *= 2;
    }
    return ind;
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        ll n;
        cin >> n;

        cout << solve(n) << "\n";
    }
    return 0;
}
