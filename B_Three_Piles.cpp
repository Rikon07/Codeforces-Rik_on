#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define siuu ios_base :: sync_with_stdio(false); cin.tie(0); cout.tie(0)


void solve()
{
    ll a, b, c;
    cin >> a >> b >> c;

    ll dif = abs(a-b);

    if(abs((a+c)-b) > dif)
    {
        cout << abs((a+c)-b) << '\n';
    }
    else
    {
        cout << dif << '\n';
    }
}

int main()
{
    siuu;
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }

    return 0;
}