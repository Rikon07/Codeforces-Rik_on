// Cpp
/*
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define siuu ios_base :: sync_with_stdio(false); cin.tie(0); cout.tie(0)

bool isPalindrome(const string &s) 
{
    int left = 0, right = s.size() - 1;
    while (left < right) {
        if (s[left] != s[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}
void solve()
{
    string str;
    cin >> str;
    int n = str.size();
    if (!isPalindrome(str)) {
        cout << n << "\n";
        return;
    }
    if (!isPalindrome(str.substr(0, n-1)) || !isPalindrome(str.substr(1, n-1))) {
        cout << n-1 << "\n";
        return;
    }
    cout << "0\n";
}
int main()
{
    siuu;
    solve();

    return 0;
}
*/


const readline = require("readline");

function isPalindrome(s) 
{
    let left = 0, right = s.length - 1;
    while (left < right) {
        if (s[left] !== s[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

function solve(str) 
{
    const n = str.length;

    if (!isPalindrome(str)) 
    {
        console.log(n);
        return;
    }
    if (!isPalindrome(str.slice(0, n - 1)) || !isPalindrome(str.slice(1))) 
    {
        console.log(n - 1);
        return;
    }
    console.log(0);
}

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

rl.question("", (str) => {
    solve(str.trim());
    rl.close();
});
