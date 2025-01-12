#include<bits/stdc++.h>
using namespace std;

int team(int n)
{
    int athlete[n];
    for(int i=0; i<n; i++)
    {
        cin >> athlete[i];
    }
    sort(athlete, athlete+n);
    int mini = athlete[1]-athlete[0];
    for(int i=0; i<n-1; i++)
    {
        if(athlete[i+1] - athlete[i] < mini)
            mini = athlete[i+1] - athlete[i];
    }
    return mini;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    int test, N;
    cin >> test;
    while(test--)
    {
        cin >> N;
        int value = team(N);

        cout << value << "\n";
    }
    return 0;
}
