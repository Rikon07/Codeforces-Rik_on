#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define Yes cout << "YES\n"
#define No cout << "NO\n"
int main()
{
    int tc;
        cin >> tc;
    while(tc--)
    {
        int x, y;
        cin >> x >> y;
        int mini = min(x, y), maxi = max(x, y);

        cout << mini <<" "<< maxi <<'\n';
    }
    return 0;
}