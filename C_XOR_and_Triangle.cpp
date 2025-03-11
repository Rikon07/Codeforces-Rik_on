#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define siuu ios_base :: sync_with_stdio(false); cin.tie(0); cout.tie(0)
bool checkTwosPower(int n) 
{
    return n > 0 && (n & (n - 1)) == 0;
}
bool isTriangle(int x, int y) 
{
    int Xor = x^y;
    return (x + y > Xor) && (x+Xor > y) && (y+Xor > x);
}
void solve(int x)
{
    if(checkTwosPower(x) || checkTwosPower(x+1)) 
    {
        cout << -1 <<'\n';
    } 
    else 
    {
        int p = 1;
        while(p*2 < x) 
        {
            p *= 2;
        }
        
        int y = p-1;
        cout << y <<'\n';
    }
}
int main()
{
    siuu;
    int tc;
        cin >> tc;
    while(tc--)
    {
        int x;
        cin >> x;
        solve(x);
    }
    return 0;
}