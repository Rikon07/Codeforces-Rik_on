#include<bits/stdc++.h>
using namespace std;

int main()
{
    int  n, i, mini, flag = 1;
    cin >> n;
    int arr[n];
    for(i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr+n);

    for(i=0; i<n; i++)
    {
        if(arr[i] == 0)
        {
            flag = 0;
            break;
        }
        if(arr[i] > 0 && i != 0)
        {
            (arr[i] > abs(arr[i-1])) ? mini = abs(arr[i-1]) : mini = arr[i];
            break;
        }
        else if(arr[i] > 0 && i == 0)
        {
            continue;
        }
        else
        {
            mini = abs(arr[n-1]);
        }
    }
    if(n == 1)
        mini = abs(arr[0]);

    (flag) ? cout << mini << "\n" : cout << flag << "\n";
    return 0;
}
