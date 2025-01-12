#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int tc;
        cin >> tc;
    while(tc--)
    {
        ll n, m;
        cin >> n >> m;
        /*ll pai = 0;
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=m; j++)
            {
                if((j*(__gcd(i,j)))%(i+j)==0 || (i+j)%(j*(__gcd(i,j)))==0)
                {
                    cout << i <<" "<<j<<'\n';
                    pai++;
                }
            }
        }
        cout << pai <<'\n';*/
        ll res = n;
        for(ll i=2; i<=m; i++)
        {
            ll x = (n+i)/(i*i);
            res += x;
        }
        cout << res <<'\n';
    }
    return 0;
}