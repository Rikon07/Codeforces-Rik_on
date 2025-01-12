#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
int solve(int n)
{
    vector<int> ar;
    map<int , int> mp;
    for(int i=0; i<n; i++)
    {
        int ele;
        cin >> ele;
        ar.pb(ele);
        mp[ele]++;
    }
    //sort(ar.begin(), ar.end());
    
    int ans = 0, cnt = 0;
    for(auto it: mp)
    {
        cnt = it.second;
        ans = max(ans, cnt);
    }
    return ans;
}
int main()
{
    int n, d;
        cin >> n;
    
    cout << solve(n) <<'\n';
    return 0;
}