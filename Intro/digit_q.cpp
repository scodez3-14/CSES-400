#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int q;
    cin >> q;
    while (q--) {
        ll k;
        cin >> k;
        ll len = 1, count = 9, start = 1;

        // Find the range where k lies
        while (k > len * count) {
            k -= len * count;
            len++;
            count *= 10;
            start *= 10;
        }

        // Find the number containing the k-th digit
        ll num = start + (k - 1) / len;
        string s = to_string(num);
        cout << s[(k - 1) % len] << '\n';
    }
}

