#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
int solve(int n)
{
    vector<int> ar(n+1);
    int mx = INT_MIN;
    for(int i=1; i<=n; i++)
    {
        cin >> ar[i];

        if(i%2==1)
        {
            mx = max(mx, ar[i]);
        }
    }
    return mx;

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