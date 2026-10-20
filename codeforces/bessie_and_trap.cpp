// Problem: TODO add problem link
// Idea: Running total of collected items, track the largest shortfall
// Time: O(n)

#include <bits/stdc++.h>
using namespace std;

int main(){

	ios::sync_with_stdio(false);

	cin.tie(nullptr);

	long long n;

	cin>>n;

	vector<pair<long long ,long long > >v;

	for(int i=0;i<n;i++){

			int a,b;

			cin>>a>>b;

			v.push_back({a,b});
	}

	long long res=0;

	long  long collected=0;

	for(auto i=0;i<n;i++){

			long long x=v[i].first-collected;

			res=max(res,x);

			collected+=v[i].second;

	}
	cout<<res<<"\n";

}
