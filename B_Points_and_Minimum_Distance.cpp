#include<bits/stdc++.h>
typedef long long int ll;
#define endl "\n";
using namespace std;
void distance(int n)
{
    vector<int> seq(2*n);
    for(int i=0; i<2*n; i++){
        cin >> seq[i];
    }
    int sum = 0;
    pair <int, int> points[n];
    sort(seq.begin(), seq.end());
    for(int i=0; i<n; i++){
        points[i].first = seq[i];
        points[i].second = seq[(2*n)-i-1];
    }
    for(int i=0; i<n-1; i++)
    {
        sum += abs(points[i].first-points[i+1].first);
        sum += abs(points[i].second-points[i+1].second);
    }
    cout << sum <<endl;
    for(int i=0; i<n; i++){
        cout << points[i].first <<" ";
        cout << points[i].second << endl;
    }
}
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int n;
        cin >> n;
        distance(n);
    }
}