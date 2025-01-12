#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
ll solve()
{
    string s;
    cin >> s;
    ll len = s.size();
    ll moves = 0, one = 0;
    for(int i=0; i<len; i++)
    {
        if(s[i]=='1')
        {
            one++;
        }
        else if(one>0)
        {
            moves += (one+1);
        }
    }
    return moves;
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