#include<bits/stdc++.h>
using namespace std;
int odd()
{
    int a, b, c;
        cin >> a >> b >> c;
        if(a == b) return c;
        else if(b == c) return a;
        else if(a == c) return b;
}
int main()
{
    int test;
    cin >> test;
    for(int tc=1; tc<=test; tc++)
    {
        cout << odd() <<'\n';
    }
    return 0;
}