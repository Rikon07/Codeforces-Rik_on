#include<bits/stdc++.h>
typedef long long int ll;
#define endl "\n";
using namespace std;

ll solve(int n)
{
    if(n % 2 == 1){
        return 0;
    }
    else{
        ll sum = 1;
        for(ll i = 2; i <= n/2; i++)
        {
            sum *= i*i;
            sum %= 998244353;
        }
        return sum;
    }
}
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int n;
        cin >> n;
        cout << solve(n) << endl;
    }
}