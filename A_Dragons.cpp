#include<bits/stdc++.h>
using namespace std;
string next_level(int s, int n)
{
        pair <int, int> dragon[10001];
        int win = 1;
        for(int i=0; i<n; i++)
        {
            cin >>dragon[i].first>>dragon[i].second;
        }
        sort(dragon, dragon+n);
        for(int i=0; i<n; i++)
        {
            if(s > dragon[i].first){
                s += dragon[i].second;
            }
            else{
                win = 0;
                break;
            }
        }
        if(win) return "YES";
        else return "NO";
}
int main()
{
    int s, n;
    cin >> s >> n;
    cout << next_level(s, n) << "\n";
    return 0;
}