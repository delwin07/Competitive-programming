// Problem: https://codeforces.com/problemset/problem/1374/B
// Idea: Divisible by 6: divide. Else if divisible by 3: multiply by 2. Otherwise -1
// Time: O(log n)

#include <bits/stdc++.h>
using namespace std;

int main(){

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int t;

	cin>>t;
	while(t--){

			int n;
			cin>>n;
			int c=0;

			bool t=false;

			while(n!=1){

				if(n%6==0){

					n=n/6;
					c++;

				}
				else {

						if((n%3)==0){
								n*=2;
								c++;
						}
						else{

							t=true;
							break;
						}

				}
			}

			if(t ) cout<<-1<<"\n";
			else if(n==1) cout<<c<<"\n";
			else cout<<-1<<"\n";

	}

}
