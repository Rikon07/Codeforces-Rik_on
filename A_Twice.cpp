#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
int solve(int n)
{
    vector<int> ar(n);
    map<int, int> mp;
    for(int i=0; i<n; i++)
    {
        cin >> ar[i];
        mp[ar[i]]++;
    }
    int score = 0;
    for(auto it: mp)
    {
        score += it.second/2;
    }
    return score;
}
int main()
{
    int tc;
        cin >> tc;
    while(tc--)
    {
        int n;
            cin >> n;
        
        cout << solve(n) <<'\n';
    }
    return 0;
}