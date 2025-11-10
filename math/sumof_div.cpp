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
int mod=1e9+7;


void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) a[i] = i + 1;

    map<int,int> cnt;
    for(int i : a) cnt[i]++;

    ll ans = 0;
    for(int g = n; g >= 1; g--){
        for(int i = g; i <= n; i += g){
            ans = (ans + 1LL * cnt[g] * g) % mod;  
        }
    }
    cout << ans << endl;
}

int main() {
    fastio;
    
    int t = 1;
    // cin >> t;
    while (t--) {
       solve(); 
    }

    return 0;
}
  

  
