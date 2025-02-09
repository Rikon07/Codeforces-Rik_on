#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define siuu ios_base :: sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define pb push_back

int solve()
{
    string str;
    cin >> str;
    int n = str.size();
    for (int i = 0; i < n - 1; i++) 
    {
        if (str[i] == str[i+1]) 
        {
            return 1;
        }
    }
    return n;
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