#include<bits/stdc++.h>
using namespace std;
string solve(int n)
{
    vector<int> a(n), b(n);
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    
    sort(b.begin(), b.end());
    bool yes = true;
    for(int i=0; i<n; i++)
    {
        if(a[i] % 2 != b[i] % 2)
        {
            yes = false;
            break;
        }
    }
    if(yes) return "YES";
    else return "NO";
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