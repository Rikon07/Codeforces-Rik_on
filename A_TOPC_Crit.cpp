#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define siuu ios_base :: sync_with_stdio(false); cin.tie(0); cout.tie(0)



void solve(ll a, ll b, ll c)
{
    ll dif1 = b-a;
    ll dif2 = c-b;

    if(dif1 == dif2)
    {
        cout << "secret " << dif1 <<'\n';
    }
    else 
    {
        cout << "not secret\n";
    }

}

int main()
{
    ll a, b, c;
    cin >> a >> b >> c;

    solve(a, b, c);

    return 0;
}