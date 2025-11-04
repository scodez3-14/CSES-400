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
#define YesNo(x) cout << ((x) ? "Yes\n" : "No\n")
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
 
vector<int> getDivisors(int n) {
    vector<int> divisors;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            divisors.pb(i);
            if (i != n / i) divisors.push_back(n / i);
        }
    }
    sort(divisors.begin(), divisors.end());
    return divisors;
}
 
 
 
int mex(vector<int>& a) {
    int n = a.size();
    vector<bool> present(n + 1, false);
    for (int x : a)
        if (0 <= x && x <= n)
            present[x] = true;
    for (int i = 0; i <= n; i++)
        if (!present[i])
            return i;
    return n + 1;
}
 
 
 
 
long long nCr(long long n, long long r) {
    if (r > n) return 0;
    if (r == 0 || r == n) return 1;
    long long res = 1;
    for (long long i = 1; i <= r; i++) {
        res = res * (n - i + 1) / i;
    }
    return res;
}
 
 
 
int fp(int a,int b,int m){
    long long r=1;
    while(b){if(b&1)r=r*a%m;a=a*a%m;b>>=1;}
    return r;
}
 
int query(const string &s, long long x) {
    if (s.find('B') == string::npos) return x;
 
    long long c = 0;
    while (x > 0) {
        for (char ch : s) {
            if (x == 0) break;
            if (ch == 'B') x >>= 1;
            else x--;
            c++;
        }
    }
    return c;
}
 
 
void solve(){
 
    int n;cin>>n;
    vector<int>a(n);
    cin>>a;
    cout<<mex(a)<<endl;
 
 
}
 
 
 
 
signed main() { 
    fastio;
    int t = 1;
    //cin >> t;   
    while (t--) solve();
}        