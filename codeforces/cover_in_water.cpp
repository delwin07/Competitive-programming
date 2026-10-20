// Problem: TODO add problem link
// Idea: Three empty cells in a row means 2 operations, otherwise count the empty cells
// Time: O(n)

#include <bits/stdc++.h>
using namespace std;

int main(){

		int t;
		cin>>t;

		while(t--){
			int c=0;
		bool t1=false;
			int s;
			string p;
			cin>>s;
			cin>>p;
			for(int i=0;i<s;i++){

				if(p[i]=='.' and i+1 <s and  p[i+1]=='.' and i+2 <s and p[i+2]=='.'){
					t1=true;

					break;
				}
				else if (p[i]=='.'){
					c+=1;}
				else continue;

			}

			if(t1==true)cout<<2<<endl;
			else cout<<c<<endl;

		}
	}
