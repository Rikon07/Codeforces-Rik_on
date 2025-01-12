#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int solve(int n)
{
    vector<int> ar(n);
    for(int i=0; i<n; i++)
        cin >> ar[i];
    
    sort(ar.begin(), ar.end());

    int op = 0, median=0, mid=0;

    if(n%2 == 0)
    {
        mid = n/2-1;
        median = ar[mid];
    }
    else
    {
        mid = n/2;
        median = ar[mid];
    }
    
    for(int i=mid; i<n; i++)
    {
        if(ar[i] == median)
            op++;
    }
    return op;
}
int main()
{
    int tc;
        cin >> tc;
    while(tc--)
    {
        int n;
            cin >> n;
        cout << solve(n) <<"\n";
    }
    return 0;
}