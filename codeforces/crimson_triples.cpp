// Problem: TODO add problem link
// Idea: Sum of floor(n/i)^2 over i
// Time: O(n)

#include <bits/stdc++.h>

using namespace std;

void solve(){

	long long n;

	cin>>n;

	long long ans=0;

	for(long long i=1;i<=n;i++){

		ans+= 1LL * (n/i)  * (n/i);

	}

	cout<<ans<<"\n";

}

int main(){

	long long t;

	cin>>t;

	while(t--) solve();

}
