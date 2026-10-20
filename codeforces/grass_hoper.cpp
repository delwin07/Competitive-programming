// Problem: TODO add problem link
// Idea: If x is not divisible by k, one jump works. Otherwise split x into two jumps that are each not divisible by k
// Time: O(k)

#include <bits/stdc++.h>
using namespace std;

int main(){

		int t;
		cin>>t;

		while(t--){

				int x,k;
				cin>>x>>k;
				if(x%k!=0){

					cout<<1<<endl;

					cout<<x<<endl;
				}
				else{
					int v=x-1;

				while(v%k==0){
					v--;
				}
				int c=x-v;

				while(c%k==0){
					c--;
				}

				cout<<2<<endl;

				cout<<v<<" "<<c<<endl;

				}

		}

}
