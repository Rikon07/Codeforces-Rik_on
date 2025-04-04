#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{
    string s, t;
        cin >> s >> t;
    
    if(s.size() == t.size())
    {
        if(s == t)
            cout << s <<"\n";
        else
            cout << "-1" <<"\n";
        return;
    }
    if(s.size() > t.size()) swap(s, t);
    
    int n = s.size(), m = t.size();
    int l = (n*m)/__gcd(n, m), k = 0;
    string ans = "";
    for(int i=0; i<l; i++)
    {
        ans += (char)s[k];
        k++;
        k %= n;
    }
    k = 0;
    for(int i=0; i<l; i++)
    {
        if(ans[i] != t[k])
        {
            cout << -1 <<"\n";
            return;
        }
        k++;
        k %= m;
    }
    cout << ans <<"\n";
}
int main()
{
    int query;
    cin >> query;
    while(query--)
    {
        solve();
    }
    return 0;
}