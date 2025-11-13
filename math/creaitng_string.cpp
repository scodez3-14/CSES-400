 #include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define all(x) (x).begin(), (x).end()
#define endl '\n'
  
#define deb(...) logger(#__VA_ARGS__, __VA_ARGS__)
template<typename ...Args>
void logger(string vars, Args&&... values) {
    cout << vars << " = ";
    string delim = "";
    (..., (cout << delim << values, delim = ", "));
    cout<<endl;
}


const int M = 1000000007;
const int MAXN = 1000000;

long long fact[MAXN+1], invfact[MAXN+1];

long long modpow(long long a, long long b){
    long long r = 1;
    while(b){
        if(b & 1) r = (r * a) % M;
        a = (a * a) % M;
        b >>= 1;
    }
    return r;
}

void precompute(){
    fact[0] = 1;
    for(int i = 1; i <= MAXN; i++)
        fact[i] = fact[i-1] * i % M;

    invfact[MAXN] = modpow(fact[MAXN], M-2);

    for(int i = MAXN-1; i >= 0; i--)
        invfact[i] = invfact[i+1] * (i+1) % M;
}

long long nCr(long long n, long long r){
    if(r < 0 || r > n) return 0;
    return fact[n] * invfact[r] % M * invfact[n-r] % M;
}

void solve(){
    string s;
    cin>>s;
    ll f[256]={0};
    for(char c:s) f[(unsigned char)c]++;
    vector<ll> v;
    for(int i=0;i<256;i++) if(f[i]>0) v.push_back(f[i]);
    ll ans=fact[s.size()];
    for(ll x:v){
        ans = ans * invfact[x] % M;
    }
   cout<<ans<<endl; 
}
int main() {
    fastio;
    precompute();
    int t = 1;
   // cin >> t;
    while (t--) {
       solve(); 
    }

    return 0;
}
  

  

