#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int test;
    cin >> test;
    while(test--)
    {
        int n;
            cin >> n;
        vector<int> ar(n), PrefixAr(n);
        
        for(int &element: ar)
            cin >> element;
        
        PrefixAr[n-1] = n;
        for(int i=n-2; i>=0; i--)
        {
            if(ar[i] != ar[i+1])
                PrefixAr[i] = i+1;
            else
                PrefixAr[i] = PrefixAr[i+1];
        }
        int query;
            cin >> query;
        while(query--)
        {
            int left, right;
                cin >> left >> right;
            left--, right--;
    
            if(PrefixAr[left] <= right)
                cout << left+1 <<" "<< PrefixAr[left]+1 <<"\n";
            else
                cout << -1 <<" "<< -1 <<"\n";
        }
        cout <<"\n";
    }
    return 0;
}