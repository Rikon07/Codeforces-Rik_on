#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, k;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        int arr[n], allowed=0, cnt=0;
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr+n);
        for(int i=0; i<n-1; i++)
        {
            if(abs(arr[i]-arr[i+1]) <= k)
            {
                cnt++;
            }
            else{
                cnt=0;
            }
            if(cnt > allowed)
                allowed = cnt;
        }
        cout << n-(allowed+1) << "\n";
    }
    return 0;
}
