#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
string MakeEqual(ll n)
{
    vector<ll> wat(n);
    ll sum = 0;
    for(int i=0; i<n; i++)
    {
        cin >> wat[i];
        sum += wat[i];
    }
    ll avg = sum/n;
    ll money = 0;
    for(int i=0; i<n; i++)
    {
        if(wat[i] > avg)
        {
            money += wat[i] - avg;
        }
        else if(wat[i] < avg)
        {
            if(money >= avg-wat[i])
            {
                money -= (avg-wat[i]);
            }
            else
            {
                return "NO";
            }
        }
    }
    return "YES";
}
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        ll n;
        cin >> n;

        cout << MakeEqual(n) << "\n";
    }
    return 0;
}