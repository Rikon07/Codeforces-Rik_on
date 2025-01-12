#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int i, sum = 0;
        int ar[n];
        for(i=0; i<n; i++)
        {
            cin >> ar[i];
            sum += ar[i];
        }

        if(sum == n){
            cout << 0 << "\n";
        }
        else if(sum > n){
            cout << sum - n << "\n";
        }
        else if(sum < n){
            cout << 1 << "\n";
        }
    }
    return 0;
}
