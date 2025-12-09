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



  
ll N;
map<ll,ll> dp;

ll f(ll a){
    if(a == 0)  return 0;
    if(dp[a])   return dp[a];
    if(a&1)     return dp[a] = 2*f(a/2)+(a/2)+1;
    else        return dp[a] = 2*f(a/2-1)+(a/2)+__builtin_popcountll(a/2);
}




void solve(){
   cin>>N;
  cout<<f(N)<<endl;
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
  

  
