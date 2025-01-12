#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(ll n)
{
    string s;
    cin >> s;
    string tmp = s;
    reverse(tmp.begin(), tmp.end());
    cout << min(s, tmp+s) <<"\n";
}
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        ll n;
        cin >> n;

        solve(n);
    }
    return 0;
}