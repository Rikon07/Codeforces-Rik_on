#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
void solve(int n, int k)
{
    map<int, int> mp;
    for(int i=0; i<k; i++)
    {
        int a, b;
            cin >> a >> b;
        mp[a] += b;
    }
    vector<pair<int, int>> ar;
    for(auto it: mp)
    {
        //cout << it.first <<" "<<it.second<<" | ";
        ar.pb({it.first, it.second});
    }
   // cout <<'\n';
    sort(ar.begin(), ar.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        return a.second > b.second;
    });
    /*for(int i=0; i<k; i++)
    {
        cout << ar[i].first <<" "<<ar[i].second<<" | ";
    }*/
    int maxAmount = 0;
    for (int i = 0; i < min(n, (int)ar.size()); i++)
    {
        maxAmount += ar[i].second;
    }
    cout << maxAmount <<'\n';
}
int main()
{
    int tc;
        cin >> tc;
    while(tc--)
    {
        ll n, k;
            cin >> n >> k;
        solve(n, k);
    }
    return 0;
}