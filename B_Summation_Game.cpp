#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll SummationGame(int n, int k, int x)
{
    vector<int> ar(n);
    for(int i=0; i<n; i++)
    {
        cin >> ar[i];
    }
    sort(ar.begin(), ar.end());
    vector<ll> prefSum(n, 0);
    prefSum[0] = ar[0];
    for(int i=1; i<n; i++)
    {
        prefSum[i] = ar[i] + prefSum[i-1];
    }
    ll ans = LONG_MIN;
    for(int rmv = 0; rmv<=k; rmv++)
    {
        if(rmv == n)
        {
            ans = max(ans, 0LL);
            break;
        }
        int lastInd = n-1-rmv;
        ll afterRemove = prefSum[lastInd];

        int neg = min(n-rmv, x);
        
        int negativeTo = max(0, lastInd-neg+1);

        ll bobs, negSum;
        if(negativeTo == 0)
        {
            negSum = prefSum[lastInd];
            bobs = -negSum;
        }
        else
        {
            negSum = prefSum[lastInd] - prefSum[negativeTo-1];
            bobs = prefSum[negativeTo-1] - negSum;
        }

        ans = max(ans, bobs);
    }
    return ans;  //   {{{(>_<)}}}
}
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int N, K, X;
        cin >> N >> K >> X;
        cout << SummationGame(N, K, X) <<"\n";
    }
    return 0;
}