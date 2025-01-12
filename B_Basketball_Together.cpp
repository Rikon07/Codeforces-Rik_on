#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int Basketball(ll n, ll d)
{
    vector<int> power(n);
    for(int &player: power)
        cin >> player;
    
    sort(power.begin(), power.end());
    int l=0, r=n-1, wins=0;
    for(int i=0; i<n; i++)
    {
        ll team = power[r];
        while(team <= d && l < r)
        {
            team += power[r];
            l++;
        }
        if(team > d)
        {
            wins++;
        }
        r--;
    }
    return wins++;
}
int main()
{
    ll n, d;
    cin >> n >> d;

    cout << Basketball(n, d) <<"\n";
    return 0;
}