#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    string s;
    cin >> n >> q >> s;
    vector<long> sum(n+1);
    for(long i=0; i<n; i++)
    {
        sum[i+1] = sum[i] + s[i] - 96;
    }
    while(q--)
    {
        long left, right;
        cin >> left >> right;
        
        cout << sum[right] - sum[left-1] <<"\n";
    }
    return 0;
}