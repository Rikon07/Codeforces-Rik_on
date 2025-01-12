#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, t, i, j, cnt=0;
    cin >> n >> t;
    char children[n];
    cin >> children;
    while(t--){
    for(j=0; j<n; j++)
    {
        if(children[j] < children[j+1])
        {
            int tmp = children[j];
            children[j] = children[j+1];
            children[j+1] = tmp;
            j++;
        }
    }
    }
    cout << children << endl;
    return 0;
}
