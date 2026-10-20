// Problem: https://codeforces.com/problemset/problem/339/A
// Idea: Collect the digits, sort them, print joined with '+'
// Time: O(n log n)

#include <bits/stdc++.h>
using namespace std;

int  main(){
	string s,e;
	cin>>s;

	vector<int>a;
	if (s.length()<1) cout<<s;
	else{

	for (char c:s){
		if (c== '+') continue;
		else a.push_back(c- '0');
	}
	sort(a.begin(),a.end());

	for(int i=0;i<a.size();i++){
		cout<<a[i];
		if(i!=a.size()-1) cout<<"+";
	}
	cout<<"\n";

}

}
