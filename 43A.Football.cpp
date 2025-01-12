#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string club, fcb, rma;

    int x=0, y=0, clasico=0;
    while(n--)
    {
        cin >> club;
        if(clasico == 0)
        {
            fcb = club;
            clasico++;
        }
        if(fcb == club)
        {
            x++;
        }
        else
        {
            rma = club;
            y++;
        }
    }
    if(x>y)
        cout << fcb << "\n";
    else
        cout << rma << "\n";
}
