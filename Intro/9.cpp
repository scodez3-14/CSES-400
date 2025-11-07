









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





void solve(){
 
    int n;
    cin >> n;
    // ans is 2^n as bit is eith 0 or 1
 
    cout<<modpow(2,n,MOD)<<endl;
 
}
