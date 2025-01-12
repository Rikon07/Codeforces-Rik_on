#include<bits/stdc++.h>
using namespace std;

string odd_even(int n)
{
    int arr[n], flag = 0;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int x = arr[0] % 2;
    int y = arr[1] % 2;
    for(int i=0; i<n; i++)
    {
        if(i % 2 == 0 && arr[i] % 2 != x){
            flag = 1;
            break;
        }
        else if(i % 2 == 1 && arr[i] % 2 != y){
            flag = 1;
            break;
        }
    }
    if(flag) return "NO";
    else return "YES";
}

int main()
{
    int test, N;
    cin >> test;
    while(test--)
    {
        cin >> N;
        cout << odd_even(N) << "\n";
    }
    return 0;
}
