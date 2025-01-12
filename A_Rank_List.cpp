#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
int main()
{
    int n, k;
        cin >> n >> k;
    
    vector<pair<int, int>> ar(n);
    map<pair<int, int>, int> mp;

    for(int i=0; i<n; i++)
    {
        int problems, time;
            cin >> problems >> time;

        ar[i] = {problems, time};

        mp[{problems, time}]++;
    }

    sort(ar.begin(), ar.end(), [](const pair<int, int> &a, const pair<int, int> &b)
    {
        if(a.first == b.first)
        {
            return a.second < b.second;
        }
        return a.first > b.first;
    });

    /*for(int i=0, j=1; i<n; i++)
    {
        cout << ar[i].first << " " << ar[i].second << " ";
        
        if(i>0)
        {
            if(ar[i].first != ar[i-1].first || ar[i].second != ar[i-1].second)
            {
                j++;
            }
        }
        cout << i <<'\n';
    }*/

    //cout << ar[k].first <<" "<< ar[k].second <<" ";
    cout << mp[ar[k-1]] <<'\n';

    return 0;
}