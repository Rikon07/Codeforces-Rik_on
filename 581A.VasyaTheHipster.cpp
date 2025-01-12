#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    (a >= b) ? cout << b << " " : cout << a << " ";
    int n = abs(a-b);
    cout << n/2 << endl;
    return 0;
}
