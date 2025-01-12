#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define siuu ios_base :: sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define pb push_back
#define var vector<int> ar
#define maap map<int, int> mp
#define Yes cout << "YES\n"
#define No cout << "NO\n"
void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(m), q(k);
    for(int i=0; i<m; i++)
    {
        cin >> a[i];
    }
    for(int i=0; i<k; i++)
    {
        cin >> q[i];
    }

    unordered_set<int> st(q.begin(), q.end());
    if (k == n) 
    {
        cout << string(m, '1') << '\n';
        return;
    }
    if(k == n-1) 
    {
        int missing = 0;
        for(int i=1; i<=n; i++) 
        {
            if(!st.count(i)) 
            {
                missing = i;
                break;
            }
        }
        string result;
        for(int i=0; i<m; i++) 
        {
            if(a[i] == missing) result += '1';
            else result += '0';
        }
        cout << result << '\n';
        return;
    }

    cout << string(m, '0') << '\n';
}
int main()
{
    int tc;
        cin >> tc;
    while(tc--)
    {
        solve();
    }
    return 0;
}