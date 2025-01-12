#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll TwoDivisors(ll a, ll b)
{
    if(b%a == 0)
        return (b*b)/a;
    else
        return ((a*b)/__gcd(a, b));
}
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        ll a, b;
        cin >> a >> b;
        cout << TwoDivisors(a, b) <<"\n";
    }
    return 0;
}