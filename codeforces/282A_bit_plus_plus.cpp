// Problem: https://codeforces.com/problemset/problem/282/A
// Idea: Any statement with a '+' adds 1, otherwise subtract 1
// Time: O(n)

#include <bits/stdc++.h>

using namespace std;

int main(){
	int t,n=0;
	cin>>t;
	while (t--){
		string s;
		cin>>s;

		if (s[0]=='+' || s[1]=='+'){
			n+=1;
		}
		else
		{
			n-=1;
		}
	}
	cout<<n;
}
