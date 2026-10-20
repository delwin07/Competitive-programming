// Problem: https://codeforces.com/problemset/problem/4/A
// Idea: Two even parts exist only if the weight is even and greater than 2
// Time: O(1)

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a;

	cin>>a;

	if (a%2==0 and (a>2))
	{
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
}
