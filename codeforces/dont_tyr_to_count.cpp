// Problem: TODO add problem link
// Idea: Double the string until it is at least as long as the target, then check one extra doubling
// Time: O(n log n)

#include <bits/stdc++.h>
using namespace std;

int main(){

		int t;

		cin>>t;
		while(t--){
				int n,m;
				int c=0;
		        string x,s;
				cin>>n;
				cin>>m;

				cin>>x;
				cin>>s;

				bool p=false;

				if(x.find(s)!=std::string::npos) {

					cout<<c<<endl;
					continue;
				}

				while(!p && x.size()< s.size()){
					c+=1;

					x+=x;
					if(x.find(s)!=std::string::npos) {

						p=true;

						break;

					}

				}
							if (x.find(s) != string::npos) {
				cout << c << endl;
			}
			else {
				x += x;        // one extra doubling
				c++;
				if (x.find(s) != string::npos)
					cout << c << endl;
				else
					cout << -1 << endl;
}

			}

		}
