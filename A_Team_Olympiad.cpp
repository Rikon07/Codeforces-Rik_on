#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int>v(n);
    vector<int>sub(4);
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
        sub[v[i]]++;
    }
    sort(sub.begin(), sub.end());
    if(sub[1]>0 && sub[2]>0 && sub[3]>0)
    cout << sub[1] << "\n";
    else
    cout << sub[0] << "\n";
    vector<int>arr(n+1);
    for(int i=0; i<n; i++)
    {
        arr[i+1] = v[i];
    }
    sort(v.begin(), v.end());
    if(sub[1]>0 && sub[2]>0 && sub[3]>0)
    {
        while(sub[1]--)
        {
            for(int i=1; i<=n; i++)
            {
                if(arr[i] == 1){
                    cout << i <<" ";
                    arr[i] = 0;
                    break;
                }
            }
            for(int i=1; i<=n; i++)
            {
                if(arr[i] == 2){
                    cout << i <<" ";
                    arr[i] = 0;
                    break;
                }
            }
            for(int i=1; i<=n; i++)
            {
                if(arr[i] == 3){
                    cout << i <<" ";
                    arr[i] = 0;
                    break;
                }
            }
            cout << "\n";
        }
    }
    return 0;
}