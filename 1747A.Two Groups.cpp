#include<bits/stdc++.h>
using namespace std;

long long int group(int n)
{
    int arr[n];
    long long int sum1=0, sum2=0, maxi;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
        if(arr[i] > 0){
            sum1 += arr[i];
        }
        else{
            sum2 += arr[i];
        }
    }
    maxi = abs(abs(sum1) - abs(sum2));
    return maxi;
}

int main()
{
    int test, N;
    cin >> test;
    while(test--)
    {
        cin >> N;
        cout << group(N) << "\n";
    }
    return 0;
}
