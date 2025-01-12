#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k, month[12], i, min_month=0;
    cin >> k;

    for(i=0; i<12; i++)
    {
        cin >> month[i];
    }

    sort(month, month+12);
    reverse(month, month+12);

    for(i=0; i<12; i++)
    {
        if(min_month >= k)
            break;
        min_month += month[i];
    }

    (min_month < k) ? cout << -1 << "\n" : cout << i <<"\n";

    return 0;
}
