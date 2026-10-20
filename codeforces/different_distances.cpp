// Problem: TODO add problem link
// Idea: Constructive: output repeating blocks of 8 for each pair, with a special 12-block when n is odd
// Time: O(n)

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> ans;

        if (n % 2 == 1) {

            int x = 1, y = 2, z = 3;

            vector<int> odd = {x, z, y, z, x, x, y, y, x, y, z, z};

            for (int v : odd)
                ans.push_back(v);

            for (int i = 4; i <= n; i += 2) {
                int a = i;
                int b = i + 1;

                vector<int> even = {a, b, a, a, b, b, a, b};

                for (int v : even)
                    ans.push_back(v);
            }

        } else {

            for (int i = 1; i <= n; i += 2) {
                int a = i;
                int b = i + 1;

                vector<int> even = {a, b, a, a, b, b, a, b};

                for (int v : even)
                    ans.push_back(v);
            }
        }

        for (int v : ans)
            cout << v << ' ';
        cout << '\n';
    }

    return 0;
}
