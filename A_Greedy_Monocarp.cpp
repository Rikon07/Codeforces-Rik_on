#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define var vector<int> ar
int solve(int n, int k)
{
    var(n);
    for(int i=0; i<n; i++)
    {
        cin >> ar[i];
    }
    sort(ar.begin(), ar.end(), greater<int> () );
    ll sum = 0;
    for(int i=0; i<n; i++)
    {
        //cout << ar[i] <<" ";
        sum += ar[i];

        if(sum > k)
        {
            sum -= ar[i];
            break;
        }
        if(sum == k)
        {
            return 0;
        }
    }
    //cout << sum <<" ";
    return k - sum;
}
int main()
{
    int tc;
        cin >> tc;
    while(tc--)
    {
        int n, k;
            cin >> n >> k;

        cout << solve(n, k) <<'\n';   
    }
    return 0;
}