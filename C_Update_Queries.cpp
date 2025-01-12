#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back

void solve()
{
    int n, m;
        cin >> n >> m;
    string s, c;
        cin >> s;

    vector<int> ar(m), vec;
    set<int> st;
    for(int i=0; i<m; i++)
    {
        cin >> ar[i];
        st.insert(ar[i]);
    }
        cin >> c;

    for(auto it: st)
    {
        vec.pb(it);
    }

    //sort(vec.begin(), vec.end());
    sort(c.begin(), c.end());

    map<int, char> mp;
    for(int i=0; i<vec.size(); i++)
    {
        mp[vec[i]] = c[i];
    }
    for (auto it: mp)
    {
        s[it.first-1] = it.second;
    }

    cout << s <<'\n';
}
int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        solve();
    }
    return 0;
}
