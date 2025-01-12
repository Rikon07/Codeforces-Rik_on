#include<bits/stdc++.h>
using namespace std;
string solve(int n)
{
    vector<int> v(n);
    int maxi = 0;
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    vector<int>freq(101, 0);
    for(int i=0; i<n; i++)
    {
        maxi = max(maxi, v[i]);
        freq[v[i]]++;
    }
    bool ok = true;
    for(int i=1; i<=maxi; i++)
    {
        //cout << freq[i]<<" ";
        if(freq[i-1] < freq[i]){
            ok = false;
            break;
        }
    }
    if(ok) return "YES";
    else return "NO";
}
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int n;
        cin >> n;
        cout << solve(n) <<"\n";
    }
    return 0;
}
