// Problem: TODO add problem link
// Idea: Delete the first digit that is larger than the next one (or the last digit)
// Time: O(len)

#include <iostream>
using namespace std;

void solve(){

		long long  n;

		cin>>n;

		string s=to_string(n);

		int pos=s.length()-1;

		for(int i=0;i<s.length()-1;i++){

				if(s[i] > s[i+1]) {
					pos=i;

					break;

				}
		}

		s.erase(pos,1);

		long long res=stoll(s);

		cout<<res<<"\n";

}

int main(){

		int t;

		cin>>t;

		while(t--){

					solve();

		}

}
