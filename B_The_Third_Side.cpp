#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define siuu ios_base :: sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define pb push_back
#define var vector<int> ar

void solve(int n)
{
    var(n);
    int sum = 0;
    for(int i=0; i<n; i++)
    {
        cin >> ar[i];
        sum += ar[i];
    }

    cout << sum-(n-1) <<'\n';
}
int main()
{
    siuu;
    int tc;
        cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;
        solve(n);
    }
    return 0;
}