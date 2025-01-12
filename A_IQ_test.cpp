#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int even = 0, odd = 0, even_index=0, odd_index=0;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    for(int i=0; i<n; i++)
    {
        if(arr[i] % 2 == 0){
            even++;
            even_index = i;
        }
        else if(arr[i] % 2 == 1){
            odd++;
            odd_index = i;
        }
    }
    if(even == 1) cout << even_index+1<<"\n";
    else if(odd == 1) cout << odd_index+1<<"\n";
    return 0;
}