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
        int n, a, b;
        cin >> n >> a >> b;

        cout << min(n*a, ((n/2)*b+(n%2)*a)) <<"\n";
    }
    return 0;
}