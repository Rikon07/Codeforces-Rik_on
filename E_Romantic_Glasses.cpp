#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
string RomanticGlasses(int n)
{
    vector<ll> v(n);
    for(ll i=0; i<n; i++)
    {
        cin >> v[i];
    }
    map<ll, ll> mp;
    ll even = 0, odd = 0;
    for(ll i=0; i<n; i++)
    {
        if(i%2 == 0) even += v[i];
        else if(i%2 == 1) odd += v[i];

        ll dif = odd - even;
        if(dif == 0 || mp.find(dif) != mp.end())
        {
            return "YES";
        }
        mp[dif] = i;
    }
    return "NO";
}
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int n;
        cin >> n;
        cout << RomanticGlasses(n) <<"\n";
    }
    return 0;
}