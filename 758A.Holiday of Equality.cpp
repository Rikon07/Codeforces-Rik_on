#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, burles=0;
    cin >> n;
    int welfare[n];
    for(i=0; i<n; i++)
    {
        cin >> welfare[i];
    }
    sort(welfare, welfare+n);
    for(i=n-1; i>=0; i--)
    {
        if(i != welfare[n-1])
            burles += welfare[n-1]-welfare[i];
    }
    cout << burles << "\n";
    return 0;
}
