#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define siuu ios_base :: sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define pb push_back
#define var vector<int> ar
#define Alice cout << "Alice\n"
#define Bob cout << "Bob\n"
void solve(int n)
{
    var(n);
    int zeros = 0, ones = 0;
    bool flag = false;
    for(int i=0; i<n; i++)
    {
        cin >> ar[i];
        if(ar[i] == 0)
            zeros++;
        else
            ones++;
    }
    if(ar[0] == 1 || ar[n-1] == 1) flag = true;

    if(ones == n)
        Alice;
    else if(flag && zeros > 0)
        Alice;
    else 
        Bob;
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