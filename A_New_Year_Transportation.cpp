#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
string solve(int n, int t)
{
    vector<int> v(n-1);
    for(auto &i: v)
        cin >> i;

    for(int i=0; i<n-1;)
    {
        //cout << i <<" "<< t-1 <<"\n";
        i+=v[i];
        if(i == t-1)
            return "YES";
    }
    return "NO";
}
int main()
{
    int n, t;
    cin >> n >> t;
    cout << solve(n, t) <<"\n";
    return 0;
}