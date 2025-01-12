#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int Answer()
{
    ll n;
    cin >> n;
    for(int i=2; i<31; i++)
    {
        int p = pow(2, i) -1;
        if(n % p == 0)
        {
            return n/p;
        }
    }
}
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        cout << Answer() <<"\n";
    }
    return 0;
}