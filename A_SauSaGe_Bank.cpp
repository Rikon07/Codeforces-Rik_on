#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define siuu ios_base :: sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define var vector<int> ar

void solve(int n, int k)
{
    ll sum = 0;
    for(int i=n; i>=0; i--)
    {
        if(i == n-k+1)
        {
            sum += pow(2, i);
            break;
        }
        sum += 2;
    }
    cout << sum <<'\n';
}

int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n, k;
        cin >> n >> k;

        solve(n, k);
    }

    return 0;
}