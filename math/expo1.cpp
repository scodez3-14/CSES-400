/*
   
   Helloworld("Printf");

*/

#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define printarr(x) for (auto &i : x) cout << i << " "; cout << "\n"
#define YesNo(x) cout << ((x) ? "YES\n" : "NO\n")
#define endl '\n'

using ll = long long;
using i128 = __int128;
using pii = pair<int,int>;
using vi = vector<int>;

const int MOD = 1e9 + 7;
const int INF = 1e18;

template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template<typename T> istream& operator >> (istream& i, vector<T> &vec){for(auto &x: vec) i >> x; return i;}


mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

inline int randInt(int l, int r) {
    return uniform_int_distribution<int>(l, r)(rng);
}

ll modpow(ll a, ll e, ll m = MOD) {
    ll res = 1;
    a %= m;
    while (e > 0) {
        if (e & 1) res = (res * a) % m;
        a = (a * a) % m;
        e >>= 1;
    }
    return res;
}

ll modinv(ll a, ll m = MOD) {
    return modpow(a, m - 2, m);
}

inline int mul(int a, int b, int m = MOD) {
    return (1LL * a * b) % m;
}


// Always read the q carefully


void solve(){
    int a,b;
    cin>>a>>b;
    cout<<modpow(a,b)<<endl;
}


signed main() { 
    fastio;
    int t = 1;
    cin >> t;   
    while (t--) solve();
}        


