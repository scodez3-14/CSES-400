 #include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define all(x) (x).begin(), (x).end()
#define endl '\n'
#define int long long
  
#define deb(...) logger(#__VA_ARGS__, __VA_ARGS__)
template<typename ...Args>
void logger(string vars, Args&&... values) {
    cout << vars << " = ";
    string delim = "";
    (..., (cout << delim << values, delim = ", "));
    cout<<endl;
}

void solve(){
  int n,q;
  cin>>n>>q;
  vector<int>a(n);
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  int pref[n+1];
  pref[0]=0;
  for(int i=0;i<n;i++){
    pref[i+1]=pref[i]+a[i];
  }

  while(q--){
    int a,b;
    cin>>a>>b;
    cout<<pref[b]-pref[a-1]<<endl;
  }
}

signed main() {
    fastio;
    
    int t = 1;
    // cin >> t;
    while (t--) {
       solve(); 
    }

    return 0;
}
  

  
