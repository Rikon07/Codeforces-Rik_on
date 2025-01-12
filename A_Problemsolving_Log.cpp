#include<bits/stdc++.h>
using namespace std;
int log(char x)
{
    int v = x-64;
    return v;
}
int solve(int n)
{
    string problems;
    cin >> problems;
    map<char, int> mp;
    for(int i=0; i<n; i++)
    {
        mp[problems[i]]++;
    }
    int solved = 0;
    for(auto it: mp)
    {
        int x = log(it.first);
        //cout <<it.second<<" "<< x <<"\n";
        if(it.second >= x)
        {
            solved++;
        }
    }
    return solved;
}
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int n;
        cin >> n;
        cout << solve(n) <<"\n";
    }
    return 0;
}