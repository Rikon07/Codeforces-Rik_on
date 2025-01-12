#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int Chips(int n)
{
    vector<int> rib(n);
    int hudai = 0 , lowe = 0, upp=0;
    for(int i=0; i<n; i++)
    {
        cin >> rib[i];
        if(rib[i] == 1 && hudai == 0) {
            lowe = i;
            hudai++;
        }
    }
    hudai = 0;
    for(int i=n-1; i>=0; i--)
    {
        if(rib[i] == 1 && hudai == 0) {
            upp = i;
            hudai++;
        }
    }
    //int upp = upper_bound(rib.begin(), rib.end(), 1) - rib.begin();
    //int lowe = lower_bound(rib.begin(), rib.end(), 1) - rib.begin();
    int moves = 0;
    //cout << lowe <<" "<< upp <<"\n";
    for(int i = lowe; i<upp; i++)
    {
        if(rib[i] == 0) moves++;
    }
    return moves;
}
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int n;
        cin >> n;

        cout << Chips(n) <<"\n";
    }
    return 0;
}