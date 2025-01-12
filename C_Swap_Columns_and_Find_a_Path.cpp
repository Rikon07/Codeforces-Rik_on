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
    for(int i=0; i<n; i++)
    {
        cin >> ar[i];
    }
    for(int i=0; i<n; i++)
    {
        cin >> br[i];
    }
    int sum = INT_MIN, total = 0;

    for(int i=0; i<n; i++)
    {
        total += max(ar[i], br[i]);
    }
    for(int i=0; i<n; i++)
    {
        int c = total + min(ar[i], br[i]);
        sum = max(sum, c);
    }
    cout << sum <<'\n';
}
int main()
{
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout);
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