#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
string SubString(string s)
{
    int n = s.size();
    vector<pair<int, int>> ab, ba;
    for(int i=0; i<n-1; i++)
    {
        if(s[i] == 'A' && s[i+1] == 'B')
        {
            ab.push_back({i, i+1});
            i++;
        }
    }
    for(int i=0; i<n-1; i++)
    {
        if(s[i] == 'B' && s[i+1] == 'A')
        {
            ba.push_back({i, i+1});
            i++;
        }
    }
    int x = ab.size(), y = ba.size();
    if(x == 0 || y == 0) return "NO";

    for(auto it: ab)
    {
        //cout << it.first <<" "<< it.second <<"\n";
        for(auto se: ba)
        {
            if(it.first != se.first && it.first != se.second && it.second != se.second && it.second != se.first)
                return "YES";
        }
    }
    return "NO";
}
int main()
{
    string str;
    cin >> str;
    cout << SubString(str) <<"\n";
    return 0;
}