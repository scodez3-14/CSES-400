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


ll modmul(ll a, ll b, ll m){
    __int128 r = ( __int128)a * b;
    return (ll)(r % m);
}

ll modpow(ll a, ll d, ll m){bool is_prime(long long n){
    if(n < 2) return false;
    if(n % 2 == 0) return n == 2;
    for(long long i = 3; i * i <= n; i += 2){
        if(n % i == 0) return false;
    }
    return true;
}


void solve(){
  int n;
  cin>>n;
  int z=(int)sqrt(n);
  int lim=(z+2)*(z+2); 
  for(int i=n+1;i<=lim;i++){
    if(is_prime(i)){
      cout<<i<<endl;
      break;
    }
  }
}
    ll r = 1;
    while(d){
        if(d & 1) r = modmul(r, a, m);
        a = modmul(a, a, m);
        d >>= 1;
    }
    return r;
}

bool is_prime(ll n){
    if(n < 2) return false;
    for(ll p: {2,3,5,7,11,13,17,19,23,29,31,37})
        if(n % p == 0) return n == p;

    ll d = n - 1, s = 0;
    while((d & 1) == 0){
        d >>= 1;
        s++;
    }

    for(ll a: {2,325,9375,28178,450775,9780504,1795265022}){
        if(a % n == 0) continue;
        ll x = modpow(a, d, n);
        if(x == 1 || x == n - 1) continue;
        bool comp = true;
        for(int r = 1; r < s; r++){
            x = modmul(x, x, n);
            if(x == n - 1){
                comp = false;
                break;
            }
        }
        if(comp) return false;
    }
    return true;
} // miller rabin prime test

void solve(){
  ll n;
  cin>>n;
  ll z=(int)sqrt(n)+1; 
  ll lim=(z+1)*(z+1);  //as n,n+1.. x^2 ..(p)...(x+1)^2 there is altest one prime btw 
  for(ll i=n+1;i<=lim;i++){
    if(is_prime(i)){
      cout<<i<<endl;
      break;
    }
  }
}

int main() {
    fastio;
    
    int t = 1;
     cin >> t;
    while (t--) {
       solve(); 
    }

    return 0;
}
  

  
