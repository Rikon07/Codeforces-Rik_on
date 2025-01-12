#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int n, moves = 0;
        cin >> n;
        vector<int>arr(n);
        //int arr[n];
        map<int, int>mp;
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
        }
        for(int i=n-1; i>=0; i--)
        {
            if(mp[arr[i]] == 0){
                moves++;
            }
            else{
                break;
            }
            mp[arr[i]]++;
        }
        cout << n-moves <<"\n";
    }
    return 0;
}