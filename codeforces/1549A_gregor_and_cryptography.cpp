// Problem: https://codeforces.com/problemset/problem/1549/A
// Idea: p mod 2 = 1 and p mod (p-1) = 1, so print 2 and p-1
// Time: O(1)

#include <bits/stdc++.h>
using namespace std;

void solve(){

		int p;

		cin>>p;

		cout<<2<< " "<<p-1<<"\n";

}
int main(){

	ios::sync_with_stdio(false);

	cin.tie(nullptr);

	int t;

	cin>>t;

	while(t--) solve();

}
