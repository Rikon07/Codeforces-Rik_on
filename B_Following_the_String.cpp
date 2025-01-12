#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
string solve(int n)
{
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    map<char, int> mp;
    for (char c = 'a'; c <= 'z'; c++)
    {
        mp.insert({c, 0});
    }
    string s = "";
    for (int i = 0; i < n; i++)
    {
        for (auto ch : mp)
        {
            if (ch.second == v[i])
            {
                s += ch.first;
                mp[ch.first]++;
                break;
            }
        }
    }
    return s;
}
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;

        cout << solve(n) << endl;
    }
    return 0;
}