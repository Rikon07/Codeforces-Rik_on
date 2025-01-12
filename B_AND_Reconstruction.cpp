#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
void Reconstruction(int n)
{
    vector<ll> br(n-1), ar(n,0);
    for(int i=0; i<n-1; i++)
    {
        cin >> br[i];
    }
    for(int i=0; i<n-1; i++)
    {
        ar[i] |= br[i];
        ar[i+1] |= br[i];
    }
    for(int i=0; i<n-1; i++)
    {
        if(br[i] != (ar[i+1] & ar[i]))
        {
            cout << -1 <<'\n';
            return;
        }
    }
    for(int i=0; i<n; i++)
    {
        cout << ar[i] <<" ";
    }
    cout << '\n';
}
int main()
{
    int tc;
        cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;

        Reconstruction(n);
    }
    return 0;
}