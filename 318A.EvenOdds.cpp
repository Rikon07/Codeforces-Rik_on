#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, k, i, cnt=0;
    cin >> n >> k;

    if(n%2==0 && k<=(n/2))
    {
        cout << 2*k-1 << endl;
    }
    else if(n%2==0 && k>(n/2))
    {
        cout << 2*(k-(n/2)) << endl;
    }
    else if(n%2==1 && k<=(n/2)+1)
    {
        cout << 2*k-1 << endl;
    }
        else if(n%2==1 && k>(n/2)+1)
    {
        cout << 2*(k-((n/2)+1)) << endl;
    }
    return 0;
}
