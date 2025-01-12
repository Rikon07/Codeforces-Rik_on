#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int arr[n], blank_space=0, longest=0;

        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
            if(arr[i] == 0)
            {
                blank_space++;
                if(blank_space > longest){
                    longest = blank_space;
                }
            }
            else
            {
                blank_space = 0;
            }
        }
        cout << longest << "\n";
    }
    return 0;
}
