// Problem: TODO add problem link
// Idea: Even-valued sum is always even, so the answer depends on the parity of the odd sum
// Time: O(n)

#include <bits/stdc++.h>

using namespace std;

int main(){

		int t;
		cin>>t;

		while(t--){

				vector<int>red;
				vector<int>blue;

				int a;
				cin>>a;

				for(int i=0;i<a;i++){

						int v;
						cin>>v;

						if(v%2==0){

						red.push_back(v);
					}
					else blue.push_back(v);

				}

				auto e=accumulate(red.begin(),red.end(),0);
				auto o=accumulate(blue.begin(),blue.end(),0);

				 if((e%2==0 and o%2==0)  or(e%2!=0 and o%2!=0)) cout<<"YES"<<endl;

				else cout<<"NO"<<endl;
				red.clear();
				blue.clear();

		}

}
