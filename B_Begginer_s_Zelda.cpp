#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int n;
        cin >> n;
        map<int, int> tree;
        int operation = 0;
        for(int i=1; i<n; i++)
        {
            int u, v;
            cin >> u >> v;
            tree[u]++;
            tree[v]++;
        }
        for(auto it: tree)
        {
            if(it.second == 1){
                operation++;
            }
        }
        if(operation%2==1)
        cout << (operation)/2 + 1 <<"\n";
        else
        cout << (operation)/2<<"\n";
    }
    return 0;
}