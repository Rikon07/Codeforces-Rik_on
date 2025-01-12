#include<bits/stdc++.h>
using namespace std;
int Nights_watch(int n)
{
    vector<int> stw(n);
    for(int i=0; i<n; i++)
    {
        cin >> stw[i];
    }
    int mini, maxi;
    mini = *min_element(stw.begin(), stw.end());
    maxi = *max_element(stw.begin(), stw.end());
    int snow = 0;
    for(int i=0; i<n; i++)
    {
        if(stw[i] > mini && stw[i] < maxi){
            snow++;
        }
    }
    return snow;
}
int main()
{
    int n;
    cin >> n;
    cout << Nights_watch(n) << "\n";
    return 0;
}