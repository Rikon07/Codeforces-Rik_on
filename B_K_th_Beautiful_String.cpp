#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(int n, int k)
{
    string str(n, 'a');
    for(int i=n-2; i>=0; i--)
    {
        int Bpos = n-1-i;
        if(k <= Bpos)
        {
            str[i] = 'b';
            str[n-k] = 'b';

            cout << str << "\n";
            break;
        }
        k -= Bpos;
    }
    //bhairebhai (►__◄)
}
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int N, K;
        cin >> N >> K;
        solve(N, K);
    }
    return 0;
}