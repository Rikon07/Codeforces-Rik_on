
def solve():
    str_input = input()
    n = len(str_input)
    for i in range(n - 2):
        print(str_input[i], end='')
    print('i')

def main():
    tc = int(input())
    for _ in range(tc):
        solve()

if __name__ == "__main__":
    main()


'''

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define siuu ios_base :: sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define pb push_back
#define var vector<int> ar
#define maap map<int, int> mp
#define Yes cout << "YES\n"
#define No cout << "NO\n"
void solve()
{
    string str;
    cin >> str;
    int n = str.size();
    for(int i=0; i<n-2; i++)
    {
        cout << str[i];
    }
    cout << 'i' << "\n";
}
int main()
{
    int tc;
        cin >> tc;
    while(tc--)
    {
        solve();
    }
    return 0;
}

'''