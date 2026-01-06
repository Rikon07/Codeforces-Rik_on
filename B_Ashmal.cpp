#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define siuu ios_base :: sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define pb push_back
#define var vector<int> ar
#define Yes cout << "YES\n"
#define No cout << "NO\n"
void solve(int n)
{
    vector<string> ar(n);
    for(int i=0; i<n; i++)
    {
        cin >> ar[i];
    }
    string res = ar[0];
    for(int i=1; i<n; i++)
    {
        string temp1 = res+ar[i], temp2 = ar[i]+res;
        (temp1 < temp2) ? (res = temp1) : (res = temp2);
    }
    cout << res << "\n";
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