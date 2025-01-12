#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
string solve(int n)
{
    vector<int>arr(n), b(n);
    ll sumA = 0, sumB = 0;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
        sumA += arr[i];
        if(arr[i] == 1){
            b[i] = 2;
        }
        else{
            b[i] = 1;
        }
        sumB += b[i];
    }
    if(sumA >= sumB && n != 1)
        return "YES";
    else
        return "NO";
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