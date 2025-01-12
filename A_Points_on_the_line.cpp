#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
int solve(int n, int d)
{
    vector<int> ar(n);
    for(int i=0; i<n; i++)
    {
        cin >> ar[i];
    }
    int mini = *min_element(ar.begin(), ar.end());
    int maxi = *max_element(ar.begin(), ar.end());

    int diameter = maxi-mini;
    if(diameter<=d) return 0;

    sort(ar.begin(), ar.end());

    int toRemove = -1;
    for(int i=0; i<n; i++)
    {
        int cnt = 0;
        for(int j=i; j<n; j++)
        {
            if(ar[j]-ar[i] <= d)
            {
                cnt++;
            }
        }
        toRemove = max(cnt, toRemove);
    }
    
    return n-toRemove;
}
int main()
{
    int n, d;
        cin >> n >> d;
    
    cout << solve(n, d) <<'\n';
    return 0;
}