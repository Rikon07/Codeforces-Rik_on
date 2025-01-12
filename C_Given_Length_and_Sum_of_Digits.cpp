#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(int m, int s)
{
    if(s == 0)
    {
        if(m == 1) cout <<"0 0"<< endl;
        else cout <<"-1 -1"<< endl;
        return;
    }
    string maxi, mini;
    for(int i=0; i<m; i++)
    {
        int x = min(9,s);
        maxi.push_back('0'+x);
        s -= x;
    }
    if(s > 0)
    {
        cout <<"-1 -1"<< endl;
        return;
    }
    for(int i=m-1; i>=0; i--)
    {
        mini.push_back(maxi[i]);
    }
    int j=0;
    while(mini[j] =='0')
    {
        j++;
    }
    mini[0]++;
    mini[j]--;
    
    cout << mini <<" "<< maxi << endl;    //   (┬┬﹏┬┬)
}
int main()
{
    int m, s;
    cin >> m >> s;
    solve(m, s);
    return 0;
}