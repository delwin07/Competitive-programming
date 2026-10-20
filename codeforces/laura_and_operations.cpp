// Problem: TODO add problem link
// Idea: Compare parities of the three numbers and print which operations to do
// Time: O(1)

#include <bits/stdc++.h>
using namespace std;

int main(){

		int t;
		cin>>t;

		while(t--){

			int a,b,c;

			cin>>a>>b>>c;

			int ea=a%2;
			int eb=b%2;
			int ec=c%2;

			if ( (a%2==0 and b%2==0 and c%2==0) or (a%2!=0 and b%2!=0 and c%2!=0) )  cout<<1<<" "<<1<<" "<<1<<"\n";

			else if(ea==eb)  cout<<0<<" "<<0<<" "<<1<<"\n";

			else if(ea==ec)  cout<<0<<" "<<1<<" "<<0<<"\n";

			else if(ec==eb)   cout<<1<<" "<<0<<" "<<0<<"\n";

		}

	}
