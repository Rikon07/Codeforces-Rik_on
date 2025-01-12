#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int solve()
{
    string s;
        cin >> s;

    int n = s.size(), sub = 0;
    bool same = true, f = false;
    for(int i=0; i<n-1; i++)
    {
        if(f == false && s[i] == '0' && s[i+1] == '1')
        {
            f = true;
            continue;
        }
        if(s[i] != s[i+1])
        {
            same = false;
            sub++;
        }
    }
    /*for(int i=0; i<n-1; i++)
    {
        if(s[i] != s[i+1]) same = false;
        if(s[i] == '1' && s[i+1] != '1')
        {
            sub++;
        }
    }
    if(s[n-2] == '0' && s[n-1] == '1')
        sub++;*/

    if(same) return 1;
    return ++sub;
}
int main()
{
    int tc;
        cin >> tc;
    while(tc--)
    {
        cout << solve() <<'\n';
    }
    return 0;
}