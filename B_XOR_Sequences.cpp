#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
int TrailingZeros(int n)
{
    if (n == 0)
        return 32;
    int cnt = 0;
    while((n&1) == 0)
    {
        n >>= 1;
        cnt++;
    }
    return cnt;
}
int main()
{
    int tc;
        cin >> tc;
    while(tc--)
    {
        int x, y;
            cin >> x >> y;
        
        int zor = x^y;
        int trailing_zeros = TrailingZeros(zor);

        cout << (1 << trailing_zeros) <<'\n';
    }
    return 0;
}

