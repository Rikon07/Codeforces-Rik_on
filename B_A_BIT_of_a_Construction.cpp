#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
void solve(int n, int k)
{
    if(n == 1)
    {
        cout << k <<'\n';
        return;
    }
 
    int f = log2(k);
    int s = 1 << f;
    cout << (s-1) << " ";
    cout << (k-(s-1)) << " ";
    
    //int oreo = ((s-1)^(k-(s-1)));
    for(int i=2; i<n; i++)
    {
        cout << "0" <<" ";
    }
    //cout << oreo;
    cout << '\n';
}

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, k;
        cin >> n >> k;

        solve(n, k);
    }
    return 0;
}