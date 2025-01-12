#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
int points(int n)
{
    vector<int> marbles(n);
    map<int, int> mp;

    for(int &color: marbles)
    {
        cin >> color;
        mp[color]++;
    }

    int alice = (n%2 == 1) ? (n/2)+1 : (n/2);
    int bob = n / 2;

    map<int, vector<int>> freq;
    sort(marbles.begin(), marbles.end());

    for(auto &it: mp)
    {
        freq[it.second].pb(it.first);
    }

    int alice_points = 0;
    /*vector<pair<int, int>> ar;
    for(auto it: mp)
    {
        ar.pb({it.first, it.second});
    }

    sort(ar.begin(), ar.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        return a.second < b.second;
    });

    for(int i=0; i<ar.size(); i++)
    {
        if(alice >= ar[i].second)
        {
            alice_points += 2;
            alice -= ar[i].second;
        }
        else if(alice > 0)
        {
            alice_points ++;
            alice = 0;
        }
    }*/
    
    for(auto &it: freq)
    {
        vector<int> &ar = it.second;
        if(it.first == 1)
        {
            int x = ar.size() / 2;
            x += (ar.size() % 2);
            alice_points += (x*2);
        }
        else
        {
            alice_points += ar.size();
        }
    }
    return alice_points;
}
int main()
{
    int tc;
        cin >> tc;
    while(tc--)
    {
        int n;
            cin >> n;
        
        cout << points(n) <<'\n';
    }
    return 0;
}