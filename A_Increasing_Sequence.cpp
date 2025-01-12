#include<bits/stdc++.h>
using namespace std;

int sequence(int n)
{
    int arr[n], good[n], j=1;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
        if(arr[i] != j){
            good[i] = j;
            j++;
        }
        else{
            j++;
            good[i] = j;
            j++;
        }
    }
    return good[n-1];
}

int main()
{
    int test, N;
    cin >> test;
    while(test--)
    {
        cin >> N;
        int value = sequence(N);
        cout << value << "\n";
    }
    return 0;
}

