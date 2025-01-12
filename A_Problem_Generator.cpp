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
        int n, m;
            cin >> n >> m;
        string s;
            cin >> s;

        map<char, int> mp;
        int mini = 0;
        for(char c='A'; c<'H'; c++)
        {
            mp[c] = 0;
        }
        
        for(int i=0; i<n; i++)
        {
            mp[s[i]]++;
        }
        for(auto ch: mp)
        {
            if(ch.second < m)
            {
                mini += (m-ch.second);
            }
        }
        cout << mini <<'\n';
    }
    return 0;
}