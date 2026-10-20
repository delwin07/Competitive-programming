// Problem: https://codeforces.com/problemset/problem/71/A
// Idea: If length > 10, print first letter + (length-2) + last letter
// Time: O(n)

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a;
	cin>>a;

	 while (a--)
	 {
		 string s;

		 cin >>s;

		 int n;

		 n=s.length();

		 if (n>10)
		 {

			   cout<<s[0]<<(n-2)<<s[n-1]<<"\n";
		 }

		 else
		 {
			 cout<<s<<"\n";
		 }

	}
}
