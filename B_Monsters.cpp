#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool comparePair(pair<int, int> p1, pair<int, int> p2)
{
    if(p1.first < p2.first)
    {
        return false;
    }
    else if(p1.first > p2.first)
    {
        return true;
    }
    return p1.second < p2.second;
}
void monsters(int n, int k)
{
    vector<int> v(n);
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }

    vector<int> death;
    vector<pair<int, int>> ind;
    for(int i=0; i<n; i++)
    {
        if(v[i]%k == 0)
        {
            death.push_back(i+1);
        }
        else
        {
            ind.push_back({(v[i]%k), i+1});
        }
    }
    sort(ind.begin(), ind.end(), comparePair);
    for(auto it: ind)
    {
        if(it.first != 0)
        {
            death.push_back(it.second);
        }
    }
    for(auto r: death)
    {
        cout << r <<" ";
    }
    cout << "\n";
}
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int n, k;
        cin >> n >> k;
        monsters(n, k);
    }
    return 0;
}