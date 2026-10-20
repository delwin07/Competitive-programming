// Problem: TODO add problem link
// Idea: Sort, then take the largest value of (max - a[i]) + 1
// Time: O(n log n)

#include  <bits/stdc++.h>

using namespace std;

void solve(){

	int n;

	cin>>n;

	vector<int>a(n);

	vector<int>b;

	for(auto &it:a) cin>>it;

	sort(a.begin(),a.end());

	int max=a[a.size()-1];

	for(auto i :a){

		if(i!=max){

			b.push_back((abs(i-max)+1));

		}
		else b.push_back(1);
	}
	sort(b.begin(),b.end());

	cout<<b[b.size()-1]<<"\n";

}

int main(){

	ios::sync_with_stdio(false);

	cin.tie(nullptr);

	int t;

	cin>>t;

	while(t--){

		solve();
	}

}
