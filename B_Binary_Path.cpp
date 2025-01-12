#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(ll n)
{
    string s1, s2;
    cin >> s1 >> s2;

    map<string, int> bin;
    for(int i=0; i<n; i++)
    {
        string x = s1.substr(0, i+1)+s2.substr(i);
        bin[x]++;
    }
    auto miniPath = bin.begin();
    cout << miniPath->first << "\n";
    cout << miniPath->second << "\n";
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        ll n;
        cin >> n;
        solve(n);
    }
    return 0;
}