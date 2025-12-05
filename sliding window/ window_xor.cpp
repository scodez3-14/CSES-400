 #include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define all(x) (x).begin(), (x).end()
#define endl '\n'
#define M 1000000007  


#define deb(...) logger(#__VA_ARGS__, __VA_ARGS__)
template<typename ...Args>
void logger(string vars, Args&&... values) {
    cout << vars << " = ";
    string delim = "";
    (..., (cout << delim << values, delim = ", "));
    cout<<endl;
}

void modadd(ll a,ll b){
  a=(a+b) % M;
}

void solve(){
  ll n,k;
  cin>>n>>k;
  ll x,a,b,c;
  cin>>x>>a>>b>>c;

  vector<ll>aa(n);
  aa[0]=x;
  for(int i=1;i<n;i++){
    aa[i]=(aa[i-1]*a+b) % c;
  }

  ll ws=aa[0];
  for(int i=1;i<k;i++){
    ws ^=aa[i];
  }

  ll ans=ws;
  for(int i=k;i<n;i++){
    ws ^=aa[i];
    ws ^=aa[i-k];
    ans ^=ws;
  }


  cout<<ans<<endl;
  
  
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
  

  

