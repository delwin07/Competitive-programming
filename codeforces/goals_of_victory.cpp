// Problem: TODO add problem link
// Idea: The missing team's score is minus the sum of everyone else's
// Time: O(n)

#include <bits/stdc++.h>
using namespace std;

int main(){
		int t;
		cin>>t;

		while(t--){
				int s=0;

				int n;
				cin>>n;
				int a[n-1];
				for(int i=0;i<n-1;i++){

						cin>>a[i];
						s+=a[i];

				}
				cout<<-s<<endl;

		}

}
