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
  int n;
  cin>>n;
  vector<int>dp(n+1,1e9);
  dp[0]=0;
  for(int x=1;x<=n;x++){
    for(char c: to_string(x)){
      int dig=c-'0';
      if(dig>0){
        dp[x]=min(dp[x],dp[x-dig]+1);
      }
    }
  }
  cout<<dp[n]<<endl;
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
  

  
