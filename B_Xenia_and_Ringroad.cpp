#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, m;
    cin >> n >> m;
    long long int task[m];
    for(long long int i=0; i<m; i++)
    {
        cin >> task[i];
    }
    long long int time = task[0] - 1;
    for(long long int i=1; i<m; i++)
    {
        if(task[i] > task[i-1]){
            time += (task[i]-task[i-1]);
        }
        else if(task[i] < task[i-1]){
            time += n-task[i-1]+task[i];
        }
    }
    cout << time << "\n";
    return 0;
}