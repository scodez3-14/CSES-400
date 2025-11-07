#include <bits/stdc++.h>
using namespace std;

long long find_kth(long long n, long long k) {
    if (n == 1) return 1;
    long long half = n / 2;
    if (k <= half) return 2 * k;
    return 2 * find_kth((n + 1) / 2, k - half) - 1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin >> q;
    while (q--) {
        long long n, k;
        cin >> n >> k;
        cout << find_kth(n, k) << "\n";
    }
}

  
