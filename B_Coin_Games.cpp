#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define Yes cout << "YES\n"
#define No cout << "NO\n"
void solve(int n)
{
    string s;
    cin >> s;
    int up = 0;
    for(auto ch: s)
    {
        if(ch == 'U') up++;
    }
    if(up % 2) Yes;
    else No;
}
int main()
{
    int tc;
        cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;
        solve(n);
    }
    return 0;
}