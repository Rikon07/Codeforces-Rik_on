#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll kSum()
{
    double n, k;
    cin >> n >> k;
    ll f = ceil(n/k);
    k = k*f;
    int res = ceil(k/n);
    return res;
}
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        cout << kSum() <<"\n";
    }
    return 0;
}