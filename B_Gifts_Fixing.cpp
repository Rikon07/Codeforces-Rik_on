#include<bits/stdc++.h>
using namespace std;
long long int solve(int n)
{
    vector<int>a(n), b(n);
    
    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=0; i<n; i++) cin >> b[i];

    int miniA, miniB;

    miniA = *min_element(a.begin(), a.end());
    miniB = *min_element(b.begin(), b.end());

    long long int moves = 0;
    for(int i=0; i<n; i++)
    {
        moves += max(a[i]-miniA, b[i]-miniB);
    }
    return moves;
}
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n;
        cin>>n;
        cout << solve(n)<<"\n";
    }
    return 0;
}