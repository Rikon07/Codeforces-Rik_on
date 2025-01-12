#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define Yes cout << "YES\n"
#define No cout << "NO\n"
void solve(int n)
{
    vector<int> a(n);
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }

    vector<int> b(n-1);
    for(int i=0; i<n-1; i++)
    {
        b[i] =__gcd(a[i], a[i + 1]);
    }

    int idx = -1;
    for(int i=0; i<n-2; i++)
    {
        if(b[i] > b[i+1])
        {
            idx = i;
            break;
        }
    }

    if(idx == -1)
    {
        Yes;
        return;
    }

    vector<int> a1, a2, a3;
    for(int i=0; i<n; i++)
    {
        if(i != idx+1) a1.pb(a[i]);
        if(i != idx+2) a2.pb(a[i]);
        if(i != idx) a3.pb(a[i]);
    }

    vector<int> b1(n-2), b2(n-2), b3(n-2);
    for(int i=0; i<n-2; ++i)
    {
        b1[i] =__gcd(a1[i], a1[i+1]);
        b2[i] =__gcd(a2[i], a2[i+1]);
        b3[i] =__gcd(a3[i], a3[i+1]);
    }

    bool flag1 = true, flag2 = true, flag3 = true;
    for(int i=0; i<n-3; ++i)
    {
        if(b1[i] > b1[i+1]) flag1 = false;
        if(b2[i] > b2[i+1]) flag2 = false;
        if(b3[i] > b3[i+1]) flag3 = false;
    }

    if(!(flag1 || flag2 || flag3))
    {
        No;
    }
    else
    {
        Yes;
    }
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