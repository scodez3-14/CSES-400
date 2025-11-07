#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define all(x) (x).begin(), (x).end()
#define endl '\n'
#define int long long

#undef int
int main() {
    #define int long long
    fastio;

    int n;
    cin >> n;
    vector<int> a(n);
    for (int &i : a) cin >> i;

    long long ans = 1e18;
    for (long long m = 0; m < (1LL << n); m++) {
        long long s1 = 0, s2 = 0;
        for (int i = 0; i < n; i++) {
            if ((m >> i) & 1) s1 += a[i];
            else s2 += a[i];
        }
        ans = min(ans, abs(s1 - s2));
    }
    cout << ans << endl;
}

