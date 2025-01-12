#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int solve(int a, int b, int c)
{
    if(a < b) swap(a, b);
    int ans = a-b, cnt = 0, mini = ans;
    for(int i=60; i>=0; i--)
    {
        if(((b>>i)&1)==0 && ((a>>i)&1) && cnt+())
    }
}
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        cout << solve(x, y, z) <<"\n";
    }
    return 0;
}