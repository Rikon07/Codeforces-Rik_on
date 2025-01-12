#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int arr[n];
        int sum = 1;
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr+n);
        arr[0] += 1;
        for(int i=0; i<n; i++)
        {
            sum *= arr[i];
        }
        cout << sum << "\n";
    }
    return 0;
}
