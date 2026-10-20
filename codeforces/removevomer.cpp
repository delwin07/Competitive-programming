// Problem: TODO add problem link
// Idea: Count adjacent positions where characters differ and branch on the count
// Time: O(n)

#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr)

void solve()
{
	int n;

	cin>>n;

	string s;

	cin>>s;

	int cnt=0;

	for(int i=0;i+1<n;i++){

			if(s[i]!=s[i+1]) cnt++;

	}
	if(cnt==1) cout<<2<<"\n";

	else cout<<1<<"\n";

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
