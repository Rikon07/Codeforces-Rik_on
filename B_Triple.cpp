#include<bits/stdc++.h>
using namespace std;
int Triple(int n)
{
    vector<int> tri(n);
    for(int i=0; i<n; i++)
    cin >> tri[i];
    sort(tri.begin(), tri.end());
    int cnt = 1;
    for(int i=0; i<n-1; i++)
    {
        if(tri[i] == tri[i+1]){
            cnt++;
        }
        else{
            cnt = 1;
        }
        if(cnt == 3){
            return tri[i];
        }
    }
    return -1;
}
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int N;
        cin >> N;
        cout << Triple(N) << "\n";
    }
    return 0;
}