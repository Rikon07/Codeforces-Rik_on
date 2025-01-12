#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b, c, i;
    cin >> t;

    while(t--)
    {
        cin >> a >> b >> c;

        if(a < b)
        {
            int temp = a;
            a = b;
            b = temp;
        }
        double x = (a+b)/2.0;
        double moves = (x-b)/c;
        cout << ceil(moves) << "\n";
    }
    return 0;
}
