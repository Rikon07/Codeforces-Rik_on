#include<bits/stdc++.h>
using namespace std;

int even_array(int n)
{
    int arr[n], even=0, odd=0;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
        if(arr[i] % 2 != i % 2)
        {
            if(i % 2 == 0){
                even++;
            }
            else{
                odd++;
            }
        }
    }
    if(even != odd) return -1;
    else return even;
}

int main()
{
    int test, N;
    cin >> test;
    while(test--)
    {
        cin >> N;
        cout << even_array(N) << "\n";
    }
    return 0;
}
