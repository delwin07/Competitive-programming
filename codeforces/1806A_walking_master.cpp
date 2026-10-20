// Problem: https://codeforces.com/problemset/problem/1806/A
// Idea: Move y up first (only way to reach d), then spend extra x steps going left
// Time: O(1)

#include <bits/stdc++.h>
using namespace std;

int main(){

	int t;
	cin>>t;

	while(t--){
		long long a,b,c,d;

			cin>>a>>b>>c>>d;

		long long  count=0;

		if(b==d){

				if(a<c){

					cout<<-1<<endl;
		}
		else if(a==c) cout<<0<<endl;

		else {

			count+=a-c;
			cout<<count<<endl;

		}
	}

		else {

			if(d<b){

					cout<<-1<<endl;
					continue;

			}

			count=d-b;

			a+=count;

			if(a<c) cout<<-1<<endl;

			else {

				count+=(a-c);

				cout<<count<<endl;

			}

		}

	}

}
