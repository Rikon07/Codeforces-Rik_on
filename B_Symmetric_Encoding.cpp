#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define Yes cout << "YES\n"
#define No cout << "NO\n"
int main()
{
    int tc;
        cin >> tc;
    while(tc--)
    {
        int n;
        string s, t = "";
        cin >> n >> s;
        set<char> st;
        for(int i=0; i<n; i++)
            st.insert(s[i]);

        for(auto it: st)
        {
            t += it;
        }
        for(char c: s)
        {
            int x = lower_bound(t.begin(), t.end(), c)-t.begin();
            int sz = t.size();
            x = sz-x-1;
            cout << t[x];
        }
        cout <<'\n';
    }
    return 0;
}