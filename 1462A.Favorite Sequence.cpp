#include<bits/stdc++.h>
using namespace std;

void favorite_sequence(int n)
{
    int arr[n], i, x;
    vector<int> vec;
    for(i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    (n % 2 != 0) ? x = n+1 : x = n;

    for(i=0; i<x/2; i++)
    {
        vec.push_back(arr[i]);
        if(vec.size() == n){
            break;
        }
        vec.push_back(arr[n-1-i]);
    }
    for(auto it: vec)
    {
        cout << it << " ";
    }
}

int main()
{
    int test, N;
    cin >> test;
    while(test--)
    {
        cin >> N;
        favorite_sequence(N);
        cout << "\n";
    }
    return 0;
}
