#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, i;
    cin >> t;
    string ticket;
    while(t--)
    {
        cin >> ticket;
        int sum1=0, sum2=0;
        for(i=0; i<6; i++)
        {
            if(i < 3)
                sum1 += ticket[i];
            else
                sum2 += ticket[i];
        }
        (sum1 == sum2) ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}
