// Problem: TODO add problem link
// Idea: Linear search: is k present in the array?
// Time: O(n)

#include <bits/stdc++.h>
using namespace std;

int main(){

		int t;
		cin>>t;

		while(t--){

			int n,k;
				vector<int>a;

			cin>>n>>k;

			for(int i=0;i<n;i++){
				int b=0;
				cin>>b;

				a.push_back(b);

			}
			bool p=false;

			for(int i=0;i<n;i++){
			if(a[i]==k){

					p=true;

					break;

				}
			}
			if(p) cout<<"YES"<<endl;
			else cout<<"NO"<<endl;

		}

}
