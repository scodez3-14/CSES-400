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

void modadd(ll &a,ll b){
  a +=b;
  if(a>M){
    a -=M;
  }
}

void solve(){

  ll n;
  cin>>n;
  ll sum=n*(n+1)/2;
  ll dp[sum/2 + 1];
  memset(dp,0,sizeof(dp));

  if(sum &1){
    cout<<0<<endl;
    return;
  }
  dp[0]=1;
  // how ways to create x using single occu.
  
  for(int i=1;i<=n;i++){
    for(int j=sum/2;j>=1;j--){
   if(j-i>=0) modadd(dp[j],dp[j-i]);
  }
  }
   ll inv2 = (M + 1) / 2;
  cout<<dp[sum/2]*inv2 % M <<endl;

  
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
  

  
