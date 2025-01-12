#include<bits/stdc++.h>
using namespace std;

int sort_step(int n, int k)
{
    vector <int> v(n);
    int step = 0;
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
        v[i]--;
    }
    for(int i=0; i<n; i++)
    {
        if(v[i]%k != i%k)
        {
            step++;
        }
    }

    if(step == 0) return 0;
    else if(step == 2 || step == 1) return 1;
    else return -1;
}
int main()
{
    int test, N, K;
    cin >> test;
    while(test--)
    {
        cin >> N >> K;
        cout << sort_step(N, K) << "\n";
    }
    return 0;
}