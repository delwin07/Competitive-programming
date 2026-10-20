// Problem: https://codeforces.com/problemset/problem/58/A
// Idea: Greedy subsequence match of 'hello' while scanning the string once
// Time: O(n)

#include <bits/stdc++.h>

using namespace std;

int main(){

ios::sync_with_stdio(false);

cin.tie(nullptr);

string target = "hello";

string s;

cin>>s;

int count = 0;

for (char c : s) {
    if (c == target[count]) {
        count++;
    }

    if (count == 5) {
        cout << "YES";
        return 0;
    }
}

cout << "NO";

}
