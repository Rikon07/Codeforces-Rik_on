#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define Yes cout << "Yes\n"
#define No cout << "No\n"
void solve(int n, int x)
{
    vector<int> ar(n);
    int total = 0, odd = 0, even = 0;
    for(int i=0; i<n; i++)
    {
        cin >> ar[i];
        total += ar[i];
        if(ar[i]%2 == 1) odd++;
    }
    even = n - odd;
    if(n == x)
    {
        (total%2 == 1) ? Yes : No;
        return;
    }
    if(odd == 0)
    {
        No;
        return;
    }
    for(int i=1; i <= min(odd, x); i+=2)
    {
        if (x-i <= even)
        {
            Yes;
            return;
        }
    }
    No;
}
int main()
{
    int tc;
        cin >> tc;
    while(tc--)
    {
        int n, x;
            cin >> n >> x;
        
        solve(n, x);
    }
    return 0;
}