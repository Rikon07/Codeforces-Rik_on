#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
         int n, k, l;
   cin >> n >> k >> l;
   map<int, int> m;
   string s;
   cin >> s;
   for (int i = 0; i < l; i++)
   {
      m[s[i]]++;
   }
   bool F = true;
   char a = 'a';
   string A = "";
   for (int i = 0; i < k; i++)
   {
      if (m[a + i] < n)
      {
         F = false;
         for (int j = 0; j < n; j++)
         {
            A.push_back(a + i);
         }
         break;
      }
   }
   if (F)
      cout << "YES\n";
   else
   {
      cout << "NO\n";
      // for (int i = 0; i < n; i++)
      cout << A <<"\n";
   }
    }
    return 0;
}