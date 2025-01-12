#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int MaxBooks(int n, int t)
{
    vector<int> books(n);
    for(int i=0; i<n; i++)
        cin >> books[i];
    
    //sort(books.begin(), books.end());
    int maxNum = 0, maxTime = 0, usedTime = 0, j = 0;
    for(int i=0; i<n; i++)
    {
        maxTime += books[i];
        //usedTime += books[i];
        if(maxTime > t)
        {
            maxTime -= books[j];
            j++;
            continue;
        }
        maxNum++;
    }
    return maxNum;
}
int main()
{
    int n, t;
    cin >> n >> t;
    cout << MaxBooks(n, t) <<"\n";
    return 0;
}