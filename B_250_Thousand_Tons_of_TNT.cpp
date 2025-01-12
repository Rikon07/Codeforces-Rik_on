#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(int n)
{
    vector<int> arr(n);
    for(int i=0; i<n; i++)
    cin >> arr[i];

    vector<int> divs;
    for(ll i=1; i*i<=n; i++)
    {
        if(n%i == 0){
            divs.push_back(i);
            if(i*i != n){
                divs.push_back(n/i);
            }
        }
    }
    ll MaxDiff = 0;
    for(int k=0; k<divs.size(); k++)
    {
        ll mx = 0, mn = LLONG_MAX, box = 0;
        int cnt = 0;
        for(int i=0; i<n; i++)
        {
            box += arr[i];
            cnt++;
            if(cnt == divs[k])
            {
                mx = max(mx, box);
                mn = min(mn, box);
                cnt = 0;
                box = 0;
            }
        }
        MaxDiff = max(MaxDiff, mx-mn);
    }
    cout << MaxDiff <<"\n";
}
int main()
{
    int test;
    cin >> test;
    for(int t=1; t<=test; t++)
    {
        int n;
        cin >> n;
        solve(n);
    }
    return 0;
}