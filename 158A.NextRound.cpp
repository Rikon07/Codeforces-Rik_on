#include<iostream>
using namespace std;
int main()
{
    int n, k, i, next_round = 0;
    cin >> n >> k;
    int x[n];

    for(i=0; i<n; i++)
    {
        cin >> x[i];
    }
    for(i=0; i<n; i++)
    {
        if(x[i] > 0 && x[i] >= x[k-1])
        {
            next_round++;
        }
    }
    cout << next_round << endl;
    return 0;
}
