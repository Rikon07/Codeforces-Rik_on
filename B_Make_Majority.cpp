#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define Yes cout << "Yes\n"
#define No cout << "No\n"
void solve()
{
    int n, zero=0, one=0;
    string s;
    cin >> n >> s;

    char last = '1';
    
    for(int i=0; i<n; ++i)
    {
        if(s[i] == '1')
        {
            one++;
        }
        if (s[i] == '0' && last == '1')
        {
            zero++;
        }
        last = s[i];
    }
 
    if((zero >= one))
    {
        No;
        return;
    }
    Yes;
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