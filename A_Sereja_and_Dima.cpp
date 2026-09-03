#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define siuu ios_base :: sync_with_stdio(false); cin.tie(0); cout.tie(0)

int ar[1001];
 
void solve(int n)
{
    for(int i=0; i<n; i++)
    {
        cin >> ar[i];
    }
    
    ll x = 0, y = 0;
    for(int i=0, k=0, j=n-1; i<n; i++)
    {
        if(i % 2 == 0)
        {
            if(ar[k] > ar[j])
            {
                x += ar[k];
                k++;
            }
            else
            {
                x += ar[j];
                j--;
            }
        }
        else
        {
            if(ar[k] > ar[j])
            {
                y += ar[k];
                k++;
            }
            else
            {
                y += ar[j];
                j--;
            }
        }
    }
    
    cout << x << " " << y <<'\n';
    
}
 
int main()
{
    siuu;
    int n;
    cin >> n;
    
    solve(n);
 
    return 0;
}
