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
   a+=b;
   if(a>M){
     a -=M;
   }
}

void solve(){
  int n;
  cin>>n;
  vector<int>a(n);
  for(int &i:a) cin>>i;
  ll dp[401][401];


  for(int i=0;i<n;i++){
    dp[i][i]=0;
  }

  ll p[n];
  p[0]=a[0];

  for(int i=1;i<n;i++){ 
    p[i]=p[i-1]+a[i];
  }

  for(int len=2;len<=n;len++){
    for(int l=0;l<=n-len;l++){
      int r=l+len-1;
      dp[l][r]=1e18;
      for(int k=l;k<=r-1;k++){
        dp[l][r] =min(dp[l][r],dp[l][k]+dp[k+1][r] +(l==0 ? p[r] : (p[r]-p[l-1])));
      }
    }
  }

  cout<<dp[0][n-1]<<endl;
  
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
  

  
