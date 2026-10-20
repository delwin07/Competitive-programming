// Problem: TODO add problem link
// Idea: x != 1: use n ones. Else use 2s (even n) or a 3 plus 2s (odd n, k >= 3), otherwise NO
// Time: O(n)

#include <bits/stdc++.h>

using namespace std;

int main(){

		int t;
		cin>>t;

		while(t--){

			int n,k,x;

			cin>>n>>k>>x;

			if(x!=1){

				cout<<"YES"<<endl;

				cout<<n*1<<endl;

				for(int i=0;i<n;i++){

					cout<<1<<" ";

				}
			}
			else if(x==1){

				if(k==1) cout<<"NO"<<endl;

				else if(k>=2 and n%2==0) {

					cout<<"YES"<<endl;

					cout<<n/2<<endl;

				for(int i=0;i<(n/2);i++){

					cout<<2<<" ";

				}

			}
				else if(k>=3 ){

					cout<<"YES"<<endl;

					cout<<((n-3)/2)+1<<endl;

					cout<<3<<" ";

					for(int i=0;i<(n-3)/2;i++){

							cout<<2<<" ";

				}

		}
		else cout<<"NO"<<endl;

	}
}
cout<<endl;

}
