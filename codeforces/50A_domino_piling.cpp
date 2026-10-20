// Problem: https://codeforces.com/problemset/problem/50/A
// Idea: Each domino covers 2 cells, so the answer is (M*N)/2
// Time: O(1)

#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,k;

	cin>>n>>k;

	cout<<((n*k)/2);
}
