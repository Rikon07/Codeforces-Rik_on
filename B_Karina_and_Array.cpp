#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(ll n)
{
    vector<ll>arr(n);
    ll maxi;
    for(ll i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    maxi = max(arr[0]*arr[1], arr[n-1]*arr[n-2]);
    cout << maxi <<"\n";
}
int main()
{
    int test;
    cin >> test;
    for(int t=1; t<=test; t++)
    {
        ll n;
        cin >> n;
        solve(n);
    }
    return 0;
}