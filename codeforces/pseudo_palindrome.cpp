// Problem: TODO add problem link
// Idea: Sort and pair neighbours; for odd n try removing each element
// Time: O(n^2 log n)

#include <bits/stdc++.h>

using namespace std;

int even(vector<int>a){

		sort(a.begin(),a.end());

		int Min=0;

		for(int i=0;i<a.size();i+=2) Min=max(Min,a[i+1]-a[i]);

		return Min;

	}

void solve(){

	int n,d;

	cin>>n>>d;

	vector<int>a(n);

	for(auto &it :a) cin>>it;

	if( n%2==0) {

		  cout<< ( even(a)<=d ? "YES\n":"NO\n" );
	 }

	else{

			for(int i=0;i<n;i++){

				vector<int>b;

				for(int j=0;j<n;j++)  {

						if(j!=i) b.push_back(a[j]);

				}

				if(even(b) <=d){
					 cout<<"YES"<<"\n";

					return;
				}
			}

			cout<<"NO"<<"\n";
		}
	}

int main(){

		ios::sync_with_stdio(false);

		cin.tie(nullptr);

		int t;

		cin>>t;

		while(t--)  {

			solve();

		}

}
