#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long int x, y, n, answer;
    cin >> t;
    while(t--)
    {
        cin >> x >> y >> n;
        answer = (n/x)*x + y;
        if(answer <= n)
            cout << answer << endl;
        else
            cout << ((n/x)-1)*x + y << endl;
    }
    return 0;
}
