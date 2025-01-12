#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
string solve(int n)
{
    vector<int> arr(n);
    for(int i=0; i<n; i++)
        cin >> arr[i];
    
    int x=1, j=0;
    while(j<n)
    {
        for(int k=j+1; k<min(n, x); k++)
        {
            if(arr[k] < arr[k-1]){
                return "NO";
            }
        }
        j=x;
        x*=2;
    }
    return "YES";
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