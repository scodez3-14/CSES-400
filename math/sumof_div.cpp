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

void solve() {
    long long n;
    cin >> n;
    const long long mod = 1e9 + 7;

    vector<long long> a, b;
    long long i = 1;
    b.push_back(i);

    while (i <= n) {
        long long q = n / i;
        long long next = n / q + 1;
        a.push_back(q);
        b.push_back(next);
        i = next;
    }

    long long ans = 0;
    for (int i = 0; i + 1 < (int)b.size(); i++) {
        long long l = b[i];
        long long r = b[i + 1] - 1;

        long long len = (r - l + 1) % mod;
        long long sum_lr = ((l + r) % mod) * len % mod * ((mod + 1) / 2) % mod; 

        ans = (ans + (a[i] % mod) * sum_lr % mod) % mod;
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
  

  
