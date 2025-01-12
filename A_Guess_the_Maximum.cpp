#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back

int solve(int n)
{
    vector<int> ar(n);
    for(int i=0; i<n; i++)
    {
        cin >> ar[i];
    }
    int maxi = INT_MAX;
    for(int i=0; i<n-1; i++)
    {
        maxi = min(maxi, (max(ar[i], ar[i+1])-1));
    }
    return maxi;
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