// Problem: https://codeforces.com/problemset/problem/1896/A
// Idea: The first element can never move, so the permutation works only if a[0] == 1
// Time: O(n)

#include <bits/stdc++.h>

using namespace std;

int main()	{

		int k;
		cin>>k;

		while(k--){

			int n;

			cin>>n;
			int a[n];

			map<int,int>p;

			for(int i=0;i<n;i++){
				cin>>a[i];

				p[a[i]]+=1;

			}

			for(int i=0;i<n;i++){

			if(p[a[i]] >1){

				cout<<"NO"<<endl;

				}
			}

			if (a[0]==1){

				cout<<"YES"<<endl;

			}
			else cout<<"NO"<<endl;

		}

}
