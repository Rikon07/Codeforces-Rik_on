#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int solve(int n)
{
    vector<int> ar(n);
    for(int i=0; i<n; i++)
    {
        cin >> ar[i];
    }
    sort(ar.begin(), ar.end());
    int a = abs(ar[0] - ar[n-1]);
    int b = abs(ar[n-1] - ar[1]);
    int c = abs(ar[1] - ar[n-2]);
    int d = abs(ar[n-2] - ar[0]);
    return a+b+c+d;
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