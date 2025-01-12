#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test, n, k;
    cin >> test;
    while(test--)
    {
        cin >> n >> k;
        int arr[n], flag=0;
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
            if(arr[i] == k)
                flag=1;
        }
        (flag==1) ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}
