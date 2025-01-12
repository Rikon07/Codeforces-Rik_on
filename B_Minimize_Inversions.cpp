#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void minInversion(int n)
{
    vector<int> a(n), b(n);
    for(int &ai: a)
        cin >> ai;
    for(int &bi: b)
        cin >> bi;

    pair<int, int>arr[n];
    
    for(int i=0; i<n; i++)
        arr[i].first = a[i];
    for(int i=0; i<n; i++)
        arr[i].second = b[i];
    
    sort(arr, arr+n);
    for(int i=0; i<n; i++)
        cout << arr[i].first <<" ";

    cout << endl;

    for(int i=0; i<n; i++)
        cout << arr[i].second <<" ";
    
    cout << endl;
}
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int n;
        cin >> n;
        minInversion(n);
    }
    return 0;
}