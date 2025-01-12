#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, sum=0;
    cin >> n;
    int drink[n];
    for(i=0; i<n; i++)
    {
        cin >> drink[i];
        sum += drink[i];
    }
    double percant = (sum*100.0)/(n*100);

    cout << percant << endl;
    return 0;
}
