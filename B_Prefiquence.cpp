#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
int maxPrefixSubsequence(const string& a, const string& b)
{
    int i = 0, j = 0;
    int n = a.size(), m = b.size();
    
    while(i < n && j < m)
    {
        if(a[i] == b[j])
        {
            i++;
        }
        j++;
    }
    
    return i;
}
int solve(int n, int m)
{
    string a, b, tmp;
    cin >> a >> b;

    int k = maxPrefixSubsequence(a, b);
    return k;
}
int main()
{
    int tc;
        cin >> tc;
    while(tc--)
    {
        int n, m;
        cin >> n >> m;

        cout << solve(n, m) <<'\n';
    }
    return 0;
}