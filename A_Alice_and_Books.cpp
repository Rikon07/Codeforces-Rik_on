#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
int solvee(int n)
{
    int ans = 0;
    vector<int> ar(n);
    for(int i=0; i<n; i++)
        cin >> ar[i];

    for(int i=0; i<n-1; i++)
    {
        if(ans < (ar[i]+ar[n-1]))
            ans = ar[i]+ar[n-1];
    }
    return ans;
}
int main()
{
    int tc;
        cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;

        cout << solvee(n) <<'\n';
    }
    return 0;
}