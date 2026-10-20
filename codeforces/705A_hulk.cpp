// Problem: https://codeforces.com/problemset/problem/705/A
// Idea: Build the sentence by alternating 'hate' and 'love' for n feelings
// Time: O(n)

#include <bits/stdc++.h>

using namespace std;

int main(){

	int t;
	cin>>t;
	string even="I hate that I love ";
	string odd="I hate that I love that";
	string s=" ";

	if(t%2!=0){

		int n=t/2;
		for(int i=0;i<n;i++){

			s+=odd+" ";

		}
		s+="I hate it";
		cout<<s<<endl;
		s=" ";

	}
	else{

		int c=t/2;
		for(int i=0;i<c;i++){

			s+=even+" ";
			if(i!=c-1) {

				s+="that";
				s+=" ";

			}

		}
		s+="it";
		cout<<s<<endl;
			s=" ";

	}

}
