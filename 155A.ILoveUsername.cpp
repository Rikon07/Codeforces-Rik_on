#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i;
    cin >> n;
    int coder[n];
    for(i=0; i<n; i++)
    {
        cin >> coder[i];
    }
    int maxi=coder[0], mini=coder[0], cnt=0;
    for(i=0; i<n; i++)
    {
        if(coder[i] > maxi){
                maxi = coder[i];
            cnt++;
        }
        else if(coder[i] < mini){
                mini = coder[i];
            cnt++;
        }
    }
    cout << cnt << "\n";
    return 0;
}
