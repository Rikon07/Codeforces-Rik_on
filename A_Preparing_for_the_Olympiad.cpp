#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define siuu ios_base :: sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define pb push_back
#define var vector<int> ar
#define maap map<int, int> mp
#define Yes cout << "YES\n"
#define No cout << "NO\n"
void solve(int n)
{
    vector<int> ar(n), br(n);

    ll asum = 0, bsum = 0;
    for(int i=0; i<n; i++)
    {
        cin >> ar[i];
    }
    for(int i=0; i<n; i++)
    {
        cin >> br[i];
    }
    ll diff = 0;
    ll m = 0, s = 0;

    for(int i=0; i<n; i++)
    {
        ll cg = ar[i];
        ll loss;
        if(i+1 < n) loss = br[i+1];
        else loss = 0;

        if(cg-loss > 0)
        {
            m += cg;
            if (i+1 < n)
                s += br[i+1];
        }
    }
    diff = m-s;
    cout << diff << endl;
}
int main()
{
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