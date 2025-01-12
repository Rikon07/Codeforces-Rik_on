#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define siuu ios_base :: sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define pb push_back
#define var vector<int> ar
#define maap map<int, int> mp
#define nl \n
#define Yes cout << "YES\n"
#define No cout << "NO\n"
bool Square(long long n)
{
    if (n < 0) return false;
    long long sqrt_n = (long long)sqrt(n);
    return sqrt_n * sqrt_n == n;
}
void solve(int n)
{
    var(n);
    for(int i=0; i<n; i++)
    {
        cin >> ar[i];
    }
    int happy = 0, sum = 0;
    for(int i=0; i<n; i++)
    {
        //cout << ar[i] << " ";
        sum += ar[i];

        if(Square(sum) && sum % 2 == 1)
            happy++;
    }
    cout << happy << '\n';
}
int main()
{
    int tc;
        cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;
        solve(n);
    }
    return 0;
}