#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll solve()
{
    ll n, s;
    cin >> n >> s;
    return (s/(n*n));
}
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        cout << solve() << "\n";
    }
    return 0;
}