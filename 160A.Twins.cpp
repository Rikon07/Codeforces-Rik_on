#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, sum=0, mine=0;
    cin >> n;
    int coins[n];
    for(i=0; i<n; i++)
    {
        cin >> coins[i];
        sum += coins[i];
    }
    int twins=sum, cnt=0;
    sort(coins, coins+n);
    for(i=n-1; i>=0; i--)
    {
        mine += coins[i];
        twins -= coins[i];
        cnt++;
        if(twins < mine)
            break;
    }
    cout << cnt << endl;
    return 0;
}
