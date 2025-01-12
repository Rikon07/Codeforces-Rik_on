#include<bits/stdc++.h>
using namespace std;
string matrix_rotation()
{
    int arr[4], mini = 10e9, maxi = 0;
    for(int i=0; i<4; i++){
        cin >> arr[i];
        if(arr[i] >= maxi){
            maxi = arr[i];
        }
        if(arr[i] <= mini){
            mini = arr[i];
        }
    }
    if(arr[0]==mini && arr[3]==maxi){
        return "YES";
    }
    else if(arr[0]==maxi && arr[3]==mini){
        return "YES";
    }
    else if(arr[1]==mini && arr[2]==maxi){
        return "YES";
    }
    else if(arr[1]==maxi && arr[2]==mini){
        return "YES";
    }
    else{
        return "NO";
    }
}
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        cout << matrix_rotation() <<"\n";
    }
    return 0;
}