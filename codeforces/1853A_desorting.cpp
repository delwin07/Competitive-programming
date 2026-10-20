// Problem: https://codeforces.com/problemset/problem/1853/A
// Idea: If already unsorted answer is 0, else the smallest gap needs diff/2+1 operations
// Time: O(n)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        long long operations = INT_MAX;
        for (int i = 0; i < n - 1; i++){
			if (a[i] <= a[i + 1]){
                long long diff = a[i + 1] - a[i];
                long long required_operations = diff / 2 + 1;
                operations = min(operations, required_operations);
			}

            else
                operations = 0;
        }

        cout << operations << endl;
    }
    return 0;
}
