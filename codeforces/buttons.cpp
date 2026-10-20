// Problem: TODO add problem link
// Idea: Count who gets the extra neutral button; first player wins if a >= b (odd c) or a > b (even c)
// Time: O(1)

#include <bits/stdc++.h>

using namespace std;

int main(){

		int t;
		cin>>t;

		while(t--){
			int a,b,c;
			cin>>a>>b>>c;

			if (c%2!=0) {

				if(b>a) cout<<"Second"<<endl;

				else cout<<"First"<<endl;

			}
			else{

				if(a>b) cout<<"First"<<endl;

				else cout<<"Second"<<endl;

			}

		}

}
