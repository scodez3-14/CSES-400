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
  int n,x;
  cin>>n>>x;
  vector<int>a(n);
  for(int &i:a) cin>>i;
  vector<int>dp(x+1,1e9);
  dp[0]=0;

  for(int s=0;s<=x;s++){
    for(int j=0;j<n;j++){
      if(s-a[j]>=0){
      dp[s] =min(dp[s], dp[s-a[j]]+1);
      }
    }
   
  }
  cout<<(dp[x]==1e9 ? -1 : dp[x] )<<endl;

}

int main(){  
    fastio;
    
    int t = 1;
    // cin >> t;
    while (t--) {
       solve(); 
    }

    return 0;
}
  

  
