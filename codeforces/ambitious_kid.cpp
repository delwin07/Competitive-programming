// Problem: TODO add problem link
// Idea: Answer is the smallest absolute value in the array
// Time: O(n)

#include <bits/stdc++.h>
using namespace std;

int main(){

		int t;
		cin>>t;

		int a[t];

		for(int i=0;i<t;i++){

				int v;

				cin>>v;

				a[i]=abs(v);

		}

		auto y=min_element(a,a+t);

		cout<<*y;

}
