// Problem: TODO add problem link
// Idea: Pick the smallest palindrome matching n mod 12, the rest is a multiple of 12
// Time: O(1)

#include <bits/stdc++.h>

using namespace std;

void solve(){

		long long  n;

		cin>>n;

		map<long long,long long>p={  {0,0} , {1,1}, {2,2}, {3,3},  {4,4}, {5,5}, {6,6},{7,7},  {8,8}, {9,9}, {10,22}, {11,11}  };

		int rem=n%12;

		if(n>=p[rem])

		cout<<p[rem]<<" "<<n-p[rem]<<"\n";

		else cout<<-1<<"\n";

}

int main(){

	int t;

	cin>>t;

	while(t--) {
		 solve();
	 }
}
