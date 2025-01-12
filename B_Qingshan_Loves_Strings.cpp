#include<bits/stdc++.h>
using namespace std;
bool truee(string x)
{
    for(int i=1; i<x.length(); i++)
    {
        if(x[i] == x[i-1]){
            return false;
        }
    }
    return true;
}
string solve(int n, int m)
{
    string s, t;
    cin >> s >> t;
    if(truee(s))
    {
        return "Yes";
    }
    if(!truee(t) || t[0] != t[m-1]){
        return "No";
    }
    bool one = false, two = false;
    for(int i=1; i<n; i++)
    {
        if(s[i] == s[i-1]){
            if(s[i] == '0') one = true;
            if(s[i] == '1') two = true;
        }
    }
    if(one && t[0] == '0') return "No";
    if(two && t[0] == '1') return "No";

    return "Yes";
}
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int n, m;
        cin >> n >> m;
        cout << solve(n, m) <<"\n";
    }
    return 0;
}