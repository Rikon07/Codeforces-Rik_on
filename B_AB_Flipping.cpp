#include<bits/stdc++.h>
using namespace std;
int solve(int n)
{
    string s;
    cin >> s;
    int opr = n-1;
    for(int i=0; i<n; i++)
    {
        if(s[i] == 'B') opr--;
        else break;
    }
    for(int i=n-1; i>=0; i--)
    {
        if(s[i] == 'A') opr--;
        else break;
    }
    if(opr > 0) return opr;
    else return 0;
}
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int N;
        cin >> N;
        cout << solve(N) <<"\n";
    }
    return 0;
}