#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, p, q, free_room=0;
    cin >> n;

    while(n--)
    {
        cin >> p >> q;
        if(q >= (p+2))
            free_room++;
    }
    cout << free_room << endl;
    return 0;
}
