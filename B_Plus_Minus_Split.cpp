#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int solve(int n)
{
    string s;
    cin >> s;
    int penalty = 0;
    for(int i=0; i<n; i++)
    {
        if(s[i] == '+')
            penalty++;
        else if(s[i] == '-')
            penalty--;
    }
    return (abs(penalty));
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