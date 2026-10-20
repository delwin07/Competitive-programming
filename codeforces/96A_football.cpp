// Problem: https://codeforces.com/problemset/problem/96/A
// Idea: Look for a run of 7 equal characters in the string
// Time: O(n)

#include <bits/stdc++.h>
using namespace std;

int main(){

	ios::sync_with_stdio(false);

	cin.tie(nullptr);

	string s;

	cin>>s;

	int zero=0;
	int one=0;

	bool ok=false;

	for(int i=0;i<s.size();i++){

		if(s[i]=='0'){

			int zero_cnt=1;

			int k=i;

				while  (  k<s.size() and s[k+1]=='0'){

					zero_cnt++;

					k++;

				}

				zero=max(zero,zero_cnt);

				if(zero>=7) {

					ok=true;

					 break;

				 }

			}

			else {

			int one_cnt=1;

			int k_1=i;

				while  (  k_1<s.size() and s[k_1+1]=='1'){

					 one_cnt++;

					k_1++;

				}

				one=max(zero,one_cnt);

				if(one>=7) {

					ok=true;

					 break;

				 }

			}
	}
	if(ok) cout<<"YES"<<"\n";

	else cout<<"NO"<<"\n";

}
