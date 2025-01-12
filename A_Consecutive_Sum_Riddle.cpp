#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(ll n)
{
    ll left, right;
    left = ((-1*n)+1);
    right = n;
    cout << left <<" "<< right <<"\n";
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