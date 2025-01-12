#include<bits/stdc++.h>
using namespace std;

int circle()
{
    int a, b, c, diff, total, value;
    cin >> a >> b >> c;
    diff = abs(a-b);
    total = diff*2;

    if(diff >= c) value = c + diff;
    else value = c - diff;

    if(c>total || b>total || a>total) return -1;
    else return value;
}
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        cout << circle() <<"\n";
    }
    return 0;
}