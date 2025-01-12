#include<bits/stdc++.h>
using namespace std;
int solve(int n, int k)
{
    int a[n], b[n], sum=0;
    
    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=0; i<n; i++) cin >> b[i];

    sort(a, a+n);
    sort(b, b+n, greater<int>());

    for(int i=0; i<n; i++)
    {
        if(i < k){
            sum += max(a[i], b[i]);
        }
        else{
            sum += a[i];
        }
    }
    return sum;
}
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int n, k;
        cin >> n >> k;
        cout << solve(n, k) <<"\n";
    }
    return 0;
}