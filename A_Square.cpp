#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        vector<pair<ll,ll>> v(4);
        ll maxX = -1e9, maxY = -1e9, mnX = 1e9, mnY = 1e9;
        for(ll i=0; i<4; i++)
        {
            cin >> v[i].first >> v[i].second;

            maxX = max(maxX,(ll)v[i].first);
            maxY = max(maxY,(ll)v[i].second);
            mnX = min(mnX,(ll)v[i].first);
            mnY = min(mnY,(ll)v[i].second);
        }
        ll x = maxX-mnX;
        ll y = maxY-mnY;

        cout << x*y << "\n";
    }
    return 0;
}