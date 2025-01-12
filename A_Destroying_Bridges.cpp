#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int solve(int n, int k)
{
    if(k >= n-1)
        return 1;
    else
        return n;
}
int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n, k;
        cin >> n >> k;

        cout << solve(n, k) <<"\n";
    }
    return 0;
}