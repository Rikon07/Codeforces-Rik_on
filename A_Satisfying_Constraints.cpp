#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(int n)
{
    vector<ll> val;
    ll low_range = 0, high_range = LONG_MAX;
    while(n--)
    {
        int a;
        ll x;
        cin >> a >> x;
        
        if(a == 1)
            low_range = max(low_range, x);
        else if(a == 2)
            high_range = min(high_range, x);
        else if(a == 3)
            val.push_back(x);
    }
    ll satisfy = high_range - low_range + 1;
    for(auto v: val)
    {
        if(v >= low_range && v <= high_range)
            satisfy--;
    }
    if(satisfy < 0) satisfy = 0;
    cout << satisfy << "\n";
}
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int n;
        cin >> n;
        solve(n);
    }
}