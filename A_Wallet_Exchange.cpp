#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
string solve()
{
    int a, b;
        cin >> a >> b;
        if(a%2 == b%2)
        {
            return "Bob";
        }
        else 
        {
            return "Alice";
        }
}
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        cout << solve() <<"\n";
    }
    return 0;
}