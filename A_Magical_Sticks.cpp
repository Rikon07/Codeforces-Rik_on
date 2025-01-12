#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int n, ans;
        cin >> n;
        ans = n/2;
        if(n%2==1)
            ans++;
        cout << ans <<"\n";
    }
    return 0;
}
