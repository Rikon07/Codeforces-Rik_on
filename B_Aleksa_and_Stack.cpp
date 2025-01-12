#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test, n;
    cin >> test;
    while(test--)
    {
        cin >> n;
        long long int arr[n], j=1;
        for(int i=0; i<n; i++)
        {
            arr[i] = j;
            j += 2;
            if(i>1 && (3*arr[i]) % (arr[i-2]+arr[i-1]) == 0)
            {
                arr[i-2] += 1;
                arr[i-1] += 1;
            }
        }
        for(int i=0; i<n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

