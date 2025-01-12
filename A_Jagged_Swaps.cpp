#include<bits/stdc++.h>
using namespace std;
string solve(int n)
{
    vector<int> arr(n), b(n);
    bool yes = false, sorted = true;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
        b[i] = arr[i];
    }
    sort(b.begin(), b.end());
    for(int i=1; i<n-1; i++)
    {
        if(arr[0] == 1 && arr[i] > arr[i-1] && arr[i] > arr[i+1])
        {
            yes = true;
            break;
        }
    }
    for(int i=0; i<n; i++)
    {
        if(arr[i] != b[i]){
            sorted = false;
        }
    }
    if(yes || sorted) return "YES";
    else return "NO";
}
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int n;
        cin >> n;
        cout << solve(n) <<"\n";
    }
    return 0;
}