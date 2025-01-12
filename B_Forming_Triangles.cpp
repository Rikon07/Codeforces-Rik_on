#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
map<ll, ll> mp;
ll Triangles(int n)
{
    mp.clear();
    int sticks[n];
    for(int i=0; i<n; i++)
        cin >> sticks[i];
    
    sort(sticks, sticks+n);

    ll ans = 0;
    
    for(int i=0; i<n-1; i++)
    {
        mp[sticks[i]] += i;
        if(sticks[i] == sticks[i+1])
        {
            ans += mp[sticks[i]];
        }
    }
    return ans;
}
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int N;
        cin >> N;
        cout << Triangles(N) <<"\n";
    }
    return 0;
}