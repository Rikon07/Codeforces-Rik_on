#include<bits/stdc++.h>
using namespace std;

string puzzle(int n, int m)
{
    if(n >= 3 && m > 1 || m >= 3 && n > 1){
        return "NO";
    }
    else {
        return "YES";
    }
}

int main()
{
    int test, n, m;
    cin >> test;
    while (test--)
    {
        cin >> n >> m;
        string ans = puzzle(n, m);
        cout << ans << "\n";
    }
    return 0;
}

