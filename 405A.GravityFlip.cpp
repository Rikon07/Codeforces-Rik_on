#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, j;
    cin >> n;
    int box[n];
    for(i=0; i<n; i++)
    {
        cin >> box[i];
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n-1-i; j++)
        {
            if(box[j] > box[j+1])
            {
                int tmp = box[j];
                box[j] = box[j+1];
                box[j+1] = tmp;
            }
        }
    }
    for(i=0; i<n; i++)
    {
        cout << box[i] << " ";
    }
    cout << endl;
    return 0;
}

