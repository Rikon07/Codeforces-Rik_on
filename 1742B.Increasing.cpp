#include<bits/stdc++.h>
using namespace std;

string increase(int n)
{
    int arr[n], flag=0;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr+n);
    for(int i=1; i<n; i++)
    {
        if(arr[i] == arr[i-1]){
            flag=1;
            break;
        }
    }
    if(flag) return "NO";
    else return "YES";
}

int main()
{
    int test, N;
    cin >> test;
    while(test--)
    {
        cin >> N;
        cout << increase(N) << "\n";
    }
    return 0;
}
