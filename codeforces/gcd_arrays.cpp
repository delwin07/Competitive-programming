// Problem: TODO add problem link
// Idea: Count the odd numbers in [l, r]; YES if that count fits in k (special case l == r)
// Time: O(1)

#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr)

void solve()
{
	int l,r,k;

	cin>>l>>r>>k;

	if(l==r) {

		if (l==1) cout<<"NO"<<"\n";

		else cout<<"YES"<<"\n";

		return;
	}

	int odd=(r-l+1)-( (r/2) - (l-1)/2 );

	if(odd<=k) cout<<"YES"<<"\n";

	else cout<<"NO"<<"\n";

}

int main()
{
	fastio();
	int t;
	cin >> t;
	while (t--)
	{
		solve();
	}
	return 0;
}
