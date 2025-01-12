#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, magnet, grp=0, tmp=0;
    cin >> n;
    while(n--)
    {
        cin >> magnet;
        if(tmp != magnet)
            grp++;
        tmp = magnet;
    }
    cout << grp << endl;
    return 0;
}
