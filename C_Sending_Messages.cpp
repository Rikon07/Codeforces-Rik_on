#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        ll n, f, a, b;
        cin >> n >> f >> a >> b;
        vector<ll> vec(n);
        for(int i=0; i<n; i++)
            cin >> vec[i];
        ll p = 0, m;
        for(int i=0; i<n; i++)
        {
            m = min(b, abs(vec[i] - p) * a);
            f -= m;
            p = vec[i];
        }
        if(f > 0) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}