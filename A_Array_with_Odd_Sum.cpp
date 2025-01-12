#include<bits/stdc++.h>
using namespace std;
string Odd_sum(int n)
{
    vector<int>arr(n);
    int sum = 0;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    if(sum %2 == 1){
        return "YES";
    }
    else{
        int even = 0, odd = 0;
        for(int i=0; i<n; i++)
        {
            if(arr[i] % 2 == 0){
                even = 1;
                break;
            }
        }
        for(int i=0; i<n; i++)
        {
            if(arr[i] % 2 == 1){
                odd = 1;
                break;
            }
        }
        if(even && odd) return "YES";
        else return "NO";
    }
}
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int n;
        cin >> n;
        cout << Odd_sum(n) <<"\n";
    }
    return 0;
}