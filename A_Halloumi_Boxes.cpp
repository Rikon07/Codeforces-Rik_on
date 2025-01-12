#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int n, k;
        cin >> n >> k;
        vector<int>arr(n);
        bool same = true;
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
        }
        for(int i=0; i<n-1; i++)
        {
            if(arr[i] > arr[i+1]){
                same = false;
                break;
            }
        }
        if(same || k > 1){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}