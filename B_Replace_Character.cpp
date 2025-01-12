#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define siuu ios_base :: sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define pb push_back
int countDistinctPermutations(string &s)
{
    string tmp = s;
    sort(tmp.begin(), tmp.end());
    int count = 0;
    do {
        count++;
    } while (next_permutation(tmp.begin(), tmp.end()));

    return count;
}
void solve(int n)
{
    string s;
    cin >> s;

    string tmp = s;
    sort(tmp.begin(), tmp.end());
    
    map<char, int> mp;
    for(char c: s)
    {
        mp[c]++;
    }
    int l = 0, r = 50;
    char ch, x;
    for(auto it: mp)
    {
        if(it.second > l)
        {
            l = it.second;
            ch = it.first;
        }
        if(it.second < r)
        {
            r = it.second;
            x = it.first;
        }
    }
    if(l == r)
    {
        for(int i=0; i<n; i++)
        {
            if(s[i] != ch)
            {
                s[i] = ch;
                break;
            }
        }
        cout << s <<'\n';
        return;
    }
    for(int i=0; i<n; i++)
    {
        if(s[i] == x)
        {
            s[i] = ch;
            break;
        }
    }
    cout << s <<'\n';
}
int main()
{
    siuu;
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