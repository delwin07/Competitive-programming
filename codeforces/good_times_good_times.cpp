// Problem: TODO add problem link
// Idea: Answer depends only on the number of digits: 10^len + 1 style lookup
// Time: O(1)

#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr)

void solve()
{

vector<long long> v = {
    11,
    101,
    1001,
    10001,
    100001,
    1000001,
    10000001,
    100000001,
    1000000001
};

	long long x;

	cin>>x;

	string s=to_string(x);

	cout<<v[s.size()-1]<<"\n";

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
