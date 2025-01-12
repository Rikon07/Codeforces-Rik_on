#include<bits/stdc++.h>
using namespace std;
string solve(int n)
{
    vector<pair<int, int>> laptop;
    for(int i=0; i<n; i++)
    {
        int first, second;
        std::cin >> first >> second;
        laptop.push_back(std::make_pair(first, second));
    }
    sort(laptop.begin(), laptop.end());
    bool happy = false;
    for(int i=0; i<n-1; i++)
    {
        if(laptop[i].first<laptop[i+1].first && laptop[i].second>laptop[i+1].second)
        {
            happy = true;
            break;
        }
    }
    if(happy) return "Happy Alex";
    else return "Poor Alex";
}
int main()
{
    int n;
    cin >> n;
    cout << solve(n) <<"\n";
    return 0;
}