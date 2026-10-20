// Problem: TODO add problem link
// Idea: YES if k is odd or n is even, else NO
// Time: O(1)

#include <bits/stdc++.h>

using namespace std;

int main(){

		int t;
		cin>>t;

		while(t--){

				long long  n,k;

				cin>>n>>k;

				if(k%2!=0 or  n%2==0) cout<<"YES"<<endl;

				else cout<<"NO"<<endl;

		}
}
