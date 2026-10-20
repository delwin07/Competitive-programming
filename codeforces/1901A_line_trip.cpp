// Problem: https://codeforces.com/problemset/problem/1901/A
// Idea: Answer is the largest gap: start to first station, between stations, and 2x last leg back
// Time: O(n)

#include <bits/stdc++.h>
using namespace std;

int main(){

	int t;
	cin>>t;

	while (t--){
			int n,x;

			cin>>n>>x;
			vector<int>a;
			vector<int>d;
			for(int i=0;i<n;i++){

				int v;
				cin>>v;
				a.push_back(v);

				}
				a.push_back(x);

			d.push_back(a[0]);

				for(int j =0;j<n;j++){

					d.push_back(abs(a[j]-a[j+1]));

				}
				d.push_back(abs(2*(a[n-1]-x)));
				cout<< *max_element(d.begin(), d.end())<<"\n";

	}

	}
