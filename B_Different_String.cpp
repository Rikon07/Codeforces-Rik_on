#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define Yes cout << "YES\n"
#define No cout << "NO\n"
void solve()
{
    string s, ans = "";
        cin >> s;
    int n = s.size();
    bool ok = true;
    for(int i = 0; i < n - 1; i++)
    {
        if(s[i] != s[i + 1])
            ok = false;
    }
    if(ok)
    {
        No;
        return;
    }
    for(int i = 0; i < n - 1; i++)
    {
        if(s[i] != s[i + 1])
        {
            char tmp = s[i];
            s[i] = s[i+1];
            s[i+1] = tmp;
            break;
        }
    }
    Yes;
    cout << s <<'\n';
}
int main()
{
    int tc;
        cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}