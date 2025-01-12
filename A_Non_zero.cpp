#include<bits/stdc++.h>
using namespace std;
int solve(int arr[], int n)
{
    int moves = 0, sum = 0;
    for(int i=0; i<n; i++)
    {
        if(arr[i] == 0){
            arr[i]++;
            moves++;
        }
        sum += arr[i];
    }
    if(sum == 0){
        moves++;
    }
    return moves;
}
int main()
{
    int test, N;
    cin >> test;
    while(test--)
    {
        cin >> N;
        int arr[N];
        for(int i=0; i<N; i++)
        {
            cin >> arr[i];
        }
        cout << solve(arr, N) << "\n";
    }
    return 0;
}