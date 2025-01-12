#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, p, q, cnt=0, j=0, k=1;
    cin >> n >> p;
    int x[p];
    for(i=0; i<p; i++)
    {
        cin >> x[i];
    }
    cin >> q;
    int y[q];
    for(i=0; i<q; i++)
    {
        cin >> y[i];
    }
    int z[p+q];
    for(i=0; i<p; i++)
    {
        z[i] = x[i];
    }
    for(i=p; i<p+q; i++)
    {
        z[i] = y[j];
        j++;
    }
    sort(z, z+p+q);

    for(i=0; i<p+q; i++)
    {
        if(z[i] == k)
        {
            cnt++;
            k++;
        }
    }
    if(cnt == n)
        cout << "I become the guy.";
    else
        cout << "Oh, my keyboard!";
    cout << endl;
    return 0;
}
