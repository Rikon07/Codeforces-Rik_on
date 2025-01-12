#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(ll n)
{
    vector<ll> arr(n);
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    ll ans = arr[0], s = arr[0];
    for(int i=1; i<n; i++)
    {
        if(s < 0){
            s = 0;
        }
        s += arr[i];
        if(s < 0 || (abs(arr[i-1])%2 == abs(arr[i])%2)){
            s = arr[i];
        }
        ans = max(ans, s);
    }
    cout << ans <<"\n";
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