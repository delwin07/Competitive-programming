// Problem: https://codeforces.com/problemset/problem/281/A
// Idea: Uppercase only the first character
// Time: O(n)

#include <bits/stdc++.h>
using namespace std;

int main()

{
		string n;
		cin>>n;
		if (toupper(n[0])==n[0]) cout<<n;
		else{
			n[0]=toupper(n[0]);
			cout<<n;

		}

}
