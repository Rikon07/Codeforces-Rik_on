#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define siuu ios_base :: sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define pb push_back
#define Yes cout << "YES\n"
#define No cout << "NO\n"
void solve()
{
    ll n, a, b, c;
    cin >> n >> a >> b >> c;

    ll trio, sum, rem, days;
    
    trio = a + b + c;
    sum = n/trio;
    rem = n%trio;

    days = sum * 3;

    if(rem > 0) 
    {
        days++;
        rem -= a;
    }
    if(rem > 0) 
    {
        days++;
        rem -= b;
    }
    if(rem > 0) 
    {
        days++;
    }
    cout << days << '\n';
}
int main()
{
    siuu;
    int tc;
        cin >> tc;
    while(tc--)
    {
        solve();
    }
    return 0;
}