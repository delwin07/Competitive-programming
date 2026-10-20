// Problem: https://codeforces.com/problemset/problem/791/A
// Idea: Simulate years: Limak x3, Bob x2, until Limak is heavier
// Time: O(years)

#include <bits/stdc++.h>
using namespace std;

int main(){
		int a,b;
		cin>> a>>b;
		int c=0;

		do{

			a=a*3;
			b=b*2;
			c+=1;

			}while(a<=b);
		cout<<c;

}
