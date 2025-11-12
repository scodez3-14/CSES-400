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
 
void solve(){
    long long n; int k;
    cin>>n>>k;
    vector<long long>a(k);
    for(int i=0;i<k;i++) cin>>a[i];
    long long ans=0;
 
    int lim=1<<k;
 
    for(int mask=1; mask<lim; ++mask){
        __int128 prod=1;
        int bits=0;
        bool overflow=false;
        for(int i=0;i<k;i++) if(mask>>i & 1){
            bits++;
            prod *= (__int128)a[i];
            if(prod> (__int128) n){ overflow=true; break; }
        }
        if(overflow) continue;
        long long p = (long long) prod;
        long long add = n / p;
        if(bits%2==1) ans += add; else ans -= add;
    }
    cout<<ans<<"\n";
}
 
int main() {
    fastio;
    
    int t = 1;
    // cin >> t;
    while (t--){ 
       solve(); 
    }
 
    return 0;
}
  
 
