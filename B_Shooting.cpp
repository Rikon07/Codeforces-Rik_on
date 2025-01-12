#include<bits/stdc++.h>
using namespace std;
void solve(int n)
{
    vector<int> a(n), b(n);
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b.begin(), b.end());
    reverse(b.begin(), b.end());
    int sum = 0;
    for(int i=0; i<n; i++)
    {
        if(i == 0){
            sum++;
        }
        else{
            sum += b[i] * i + 1;
        }
    }
    cout << sum <<"\n";
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(b[i] == a[j]){
                a[j] = 0;
                cout << ++j << " ";
                break;
            }
        }
    }
    cout <<"\n";
}
int main()
{
    int n;
    cin >> n;
    solve(n);
    return 0;
}