#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int arr[n], i, j;
        for(i=0, j=1; i<n; i++, j++)
        {
            arr[i] = j*2;
            if(i < n-1){
                cout << arr[i] << " ";
            }
            else{
                cout << arr[i];
            }
        }
        cout << "\n";
    }
    return 0;
}
