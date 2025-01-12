#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

// int dx[] = {0,0,-1,1,-1,-1,1,1};
// int dy[] = {1,-1,0,0,1,1,1,-1};
int Forked()
{
    int a, b, x1, x2, y1, y2;
    cin >> a >> b;
    cin >> x1 >> y1 >> x2 >> y2;
    int dx[] = {a, -a, a, -a, b, b, -b, -b};
    int dy[] = {b, b, -b, -b, a, -a, a, -a};

    set<pair<int, int>> king;
    set<pair<int, int>> queen;

    for(int i=0; i<8; i++)
    {
        king.insert({x1+dx[i], y1+dy[i]});
    }
    for(int i=0; i<8; i++)
    {
        queen.insert({x2+dx[i], y2+dy[i]});
    }
    int pos = 0;
    for(auto it: king)
    {
        if(queen.find(it) != queen.end())
            pos++;
    }
    
    return pos;
}
int main()
{
    faster();
    int test;
        cin>>test;
    while(test--)
    {
        cout << Forked() << endl;
    }
    return 0;
}