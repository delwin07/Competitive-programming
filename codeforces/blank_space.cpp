// Problem: TODO add problem link
// Idea: Longest run of consecutive zeros
// Time: O(n)

#include  <bits/stdc++.h>
using namespace std;

int main(){

		int t;

		cin>>t;

		while(t--){
			vector<string>b;

				int n,a;

				int sum_1=0,max_1=0;

				cin>>n;

				for(int i=0;i<n;i++){

					cin>>a;

					b.push_back(to_string(a));

				}

				int i=0;

				for(int j=0;j<n;j++){

					if( i<n and b[i]=="0"){
					while(i<n and  b[i]=="0" ){

						sum_1+=1;
						i++;
					}
				}
				else  i++;

					max_1=max(sum_1,max_1);
					sum_1=0;
				}

				cout<<max_1<<endl;

				sum_1=0;
				max_1=0;

		}
	}
