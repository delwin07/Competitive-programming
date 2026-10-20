// Problem: TODO add problem link
// Idea: Count 0s, 1s and 2s; pair 1s with 2s, group the leftovers in threes
// Time: O(n)

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        int c0 = 0, c1 = 0, c2 = 0;

        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;

            if(x == 0) c0++;
            else if(x == 1) c1++;
            else c2++;
        }

        int pairs = min(c1, c2);

        int answer = c0
                    + pairs
                    + (c1 - pairs) / 3
                    + (c2 - pairs) / 3;

        cout << answer << endl;
    }
}
