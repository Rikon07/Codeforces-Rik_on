#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, odd_divisor;
    cin >> t;
    unsigned long long int n, i;
    while(t--)
    {
        cin >> n;
        odd_divisor=0;
        if(n%2 == 1)
        {
            cout << "YES\n";
        }
        else
        {
            for(i=1; pow(2, i)<=n; i++)
            {
                if(pow(2, i)==n)
                {
                    odd_divisor = 1;
                    break;
                }
            }
            (odd_divisor == 0) ? cout << "YES\n" : cout << "NO\n";
        }
    }
    return 0;
}
