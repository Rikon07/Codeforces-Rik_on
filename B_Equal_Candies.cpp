#include<bits/stdc++.h>
using namespace std;
long long int solve(int n)
{
    vector<int>vec(n);
    for(int i=0; i<n; i++)
    {
        cin >> vec[i];
    }
    long long int sum = 0;
    sort(vec.begin(), vec.end());
    for(int i=1; i<n; i++)
    {
        sum += vec[i]-vec[0];
    }
    return sum;
}
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int n;
        cin >> n;
        cout << solve(n) <<"\n";
    }
    return 0;
}