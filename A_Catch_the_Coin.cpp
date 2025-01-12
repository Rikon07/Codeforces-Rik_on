#include<bits/stdc++.h>
using namespace std;

#define Yes cout << "YES\n"
#define No cout << "NO\n"
int main()
{
    int n;
        cin >> n;
    while(n--)
    {
        int x, y;
            cin >> x >> y;
        
        if(y < -1) No;
        else Yes;
    }
    return 0;
}