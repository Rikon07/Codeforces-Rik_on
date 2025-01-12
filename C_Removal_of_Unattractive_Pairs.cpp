#include <bits/stdc++.h>
using namespace std;
int solve(int n)
{
    string str, tmp;
    cin >> str;
    tmp = str;
    sort(tmp.begin(), tmp.end());
    if(tmp[0] == tmp[n-1]){
        return n;
    }
    map<char, int> mp;
    for(int i=0; i<n; i++){
        mp[str[i]]++;
    }
    int m = 0, len = 0;
    for(auto it: mp){
        m = max(m, it.second);
    }
    len = max(0, m-(n-m));
    if(n%2 == 1 && len == 0) len = 1;
    return len;
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