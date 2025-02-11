#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define siuu ios_base :: sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define Yes cout << "Yes\n"
#define No cout << "No\n"
int sum_of_digits(int n) 
{
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
void solve()
{
    int x, y;
    cin >> x >> y;

    if(x == y-1)
    {
        Yes;
        return;
    }
    if(y >= x)
    {
        No;
        return;
    }
    if((x+1-y) % 9 == 0) 
    {
        Yes;
    } 
    else 
    {
        No;
    }
}
int main()
{
    int tc;
        cin >> tc;
    while(tc--)
    {
        solve();
    }
    return 0;
}