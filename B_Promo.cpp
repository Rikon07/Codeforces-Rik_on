#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(0);
    int n, q;
    cin >> n >> q;
    vector<long long> prices(n), cheap(n+1);
    for(int i=0; i<n; i++)
    {
        cin >> prices[i];
    }
    sort(prices.begin(), prices.end());
    for(int i=0; i<n; i++)
    {
        cheap[i+1] = cheap[i]+prices[i];
    }
    while(q--)
    {
    int x, y;
    cin >> x >> y;
    cout<<cheap[n-x+y] - cheap[n-x]<<"\n";
    }
    return 0;
}