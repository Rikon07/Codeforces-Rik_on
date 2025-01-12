#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int Fence(int n, int k)
{
    vector<int> planks(n);
    int sum = 0;
    for(int &plank: planks)
    {
        cin >> plank;
        sum += plank;
    }
    int miniSum = 0, minIndex = k-1;
    for(int i=0; i<k; i++)
    {
        sum = planks[i] + sum;
    }
    miniSum = sum;
    for(int j=k; j<n; j++)
    {
        miniSum = miniSum + planks[j] - planks[j-k];
        if(miniSum < sum)
        {
            miniSum = sum;
            minIndex = j;
        }
    }
    return (minIndex-k+2);
}
int main()
{
    int n, k;
    cin >> n >> k;
    cout << Fence(n, k) << "\n";
    return 0;
}