// Problem: TODO add problem link
// Idea: Repeatedly merge neighbours with the same parity and count the merges (simulation)
// Time: O(n^2)

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios::sync_with_stdio(false);

	cin.tie(NULL);

	int t;
	cin>>t;
	while(t--){

		int n;
		cin>>n;
		vector<long long>a(n);

		long long  c=0;

		for(int j=0;j<n;j++){

			long long  v;
			cin>>v;
			a[j]=v;

		}
		long long  i=0;

		while(i+1<n){

				if((a[i]%2==0 and a[i+1]%2==0 ) or  (a[i]%2!=0  and a[i+1]%2!=0) ){

					a[i]=a[i]*a[i+1];
					i++;
					c++;
					long long  k=i;
					while(k+1<n){
						a[k]=a[k+1];
						k++;

					}
					n--;
					i=0;

				}
				else{

					i++;

				}
		}

		cout<<c<<"\n";
	}

}
