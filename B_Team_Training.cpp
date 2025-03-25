#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define siuu ios_base :: sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define var vector<int> ar

void solve(int n, int x)
{
    var(n);
    for(int i=0; i<n; i++)
    {
        cin >> ar[i];
    }
    sort(ar.rbegin(), ar.rend());
    
    int teams = 0, cnt = 0;
    
    for(int skill : ar) 
    {
        cnt++;
        if(cnt * skill >= x) 
        {
            teams++;
            cnt = 0;
        }
    }
    
    cout << teams << '\n';
}
int main()
{
    siuu;
    int tc;
        cin >> tc;
    while(tc--)
    {
        int n, m;
        cin >> n >> m;
        solve(n, m);
    }
    return 0;
}