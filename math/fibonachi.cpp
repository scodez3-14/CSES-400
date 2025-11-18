#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

const int M = 1e9 + 7;

vector<vector<ll>> muti(vector<vector<ll>> &a, vector<vector<ll>> &b) {
    vector<vector<ll>> c(a.size(), vector<ll>(b[0].size(), 0));
    for (int i = 0; i < a.size(); i++) {
        for (int j = 0; j < b[0].size(); j++) {
            ll sum = 0;
            for (int k = 0; k < a[0].size(); k++) {
                sum = (sum + a[i][k] * b[k][j]) % M;
            }
            c[i][j] = sum;
        }
    }
    return c;
}

vector<vector<ll>> binary_expo(vector<vector<ll>> &x, ll n) {
    vector<vector<ll>> I = {{1, 0}, {0, 1}};
    if (n == 0) return I;

    if (n & 1) {
        auto t = binary_expo(x, n - 1);
        return muti(x, t);
    } else {
        auto xx = muti(x, x);
        return binary_expo(xx, n / 2);
    }
}

void solve() {
    ll n;
    cin >> n;
    vector<vector<ll>> z = {{1, 1}, {1, 0}};
    vector<vector<ll>> zn = binary_expo(z, n);
    cout << zn[0][1] << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
