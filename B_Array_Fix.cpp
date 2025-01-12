#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
string solve(int n)
{
    vector<int> v;
    for(int i = 0 ; i<n ; i++)
    {
        int ele;
            cin >> ele;
        v.pb(ele);
    }
    bool flag = false;
    for(int i=n-2; i>=0; i--)
    {
        if(v[i+1] >= v[i])
            continue;
        if(v[i] < 10)
        {
            flag = true;
            break;
        }
        int l = v[i];
        int rem = l%10;
        l /= 10;
        if(v[i+1] >= rem && l <= rem)
        {
            v[i] = l;
        }
        else
        {
            flag = true;
            break;
        }
    }
    
    if(flag)
        return "NO";
    else 
        return "YES";
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