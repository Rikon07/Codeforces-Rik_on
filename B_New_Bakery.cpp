#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
ll solvee(ll n, ll a, ll b)
{
    ll k = (b-a);
    if(k<0) k = 0;
    if(k>n) k = n;

    //ll sum = (k*(b*2-k+1))/2;
    ll sum = (k*b)-(k*(k-1)/2);

    n -= k;

    if(n>0) sum += (n*a);
        
    return sum;
}
int main()
{
    int tc;
        cin >> tc;
    while(tc--)
    {
        ll n, a, b;
            cin >> n >> a >> b;

        cout << solvee(n, a, b) <<'\n';
    }
    return 0;
}