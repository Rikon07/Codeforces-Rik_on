#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b;
    cin >> t;
    while(t--)
    {
        cin >> a >> b;
        if(a%b==0)
            cout << "0\n";
        else
        {
            int c = a/b + 1;
            cout << (b*c)-a << endl;
        }
    }
    return 0;
}
