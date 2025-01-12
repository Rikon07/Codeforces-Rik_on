#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, x;
    cin >> a >> b;
    x = 6- max(a, b)+1;
    if(x==5)
        cout << "5/6\n";
    else if(x==4)
        cout << "2/3\n";
    else
        cout << x/x << "/" << 6/x << endl;

    return 0;
}

