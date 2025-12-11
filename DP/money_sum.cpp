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


bool solve(int i, int target, vector<int>& arr, vector<vector<int>>& dp) {
    if(target == 0) return true;
    if(i == arr.size()) return false;

    if(dp[i][target] != -1) return dp[i][target];

    // Not take
    bool notTake = solve(i + 1, target, arr, dp);

    // Take
    bool take = false;
    if(target >= arr[i])
        take = solve(i + 1, target - arr[i], arr, dp);

    return dp[i][target] = take || notTake;
}

void solve(){ 
   int  n;
   cin>>n;
   vector<int>a(n);
   for(int &i:a) cin>>i;
/*
   // dp i is possible or not whre i is the sum 
   // i is posbbile if i-a[x] is possbile 

vector<int> dp(S+1, 0);
dp[0] = 1;

for(int x : a){
    for(int s = S; s >= x; s--){
        if(dp[s - x] == 1){
            dp[s] = 1;
        }
    }
}
*/
int S = accumulate(a.begin(), a.end(), 0);
vector<vector<int>> dp(n, vector<int>(S+1, -1));
vector<int>ans;
for(int i=1;i<=S;i++){
  if(solve(0,i,a,dp)){
    ans.push_back(i);
  }

  }

cout<<ans.size()<<endl;
  for(int i:ans) cout<<i<<" ";
  cout<<endl;




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
  

  
