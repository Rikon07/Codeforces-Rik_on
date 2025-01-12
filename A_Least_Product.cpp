#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int N;
        cin >> N;
        vector<int> arr(N);
        for(int i=0; i<N; i++)
            cin >> arr[i];
        int p = 0, n = 0, z = 0;
        for(int i=0; i<N; i++)
        {
            if(arr[i] == 0)
                z++;
            else if(arr[i] < 0)
                n++;
            else
                p++;
        }
        if(z != 0)
        {
            cout << 0 <<"\n";
            continue;
        }
        if(n % 2 != 0)
        {
            cout << 0 <<"\n";
            continue;
        }
        else
        {
            cout << 1 <<"\n";
            if(p != 0)
                cout << p <<" "<< 0 <<"\n";
            else
                cout << n-1 <<" "<< 0 <<"\n";
        }
    }
    return 0;
}