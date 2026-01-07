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

int mex(set<int>x){
    int ans=0;
    while(x.count(ans)){
      ans++;
    }

    return ans;
}

void solve(){
  int n;
  cin>>n;
  int k;
  cin>>k;
  vector<int>a(n);
  for(int i:a) cin>>i;
  //rity_queue<long long, vector<long long>, greater<long long>> pq;
  set<int>x;
  for(int i=0;i<k;i++){
    x.insert(a[i]);
  }
  int m=mex(x);
  vector<int>ans;
  ans.push_back(m);
  for(int i=k;i<n;i++){
     if(a[k]==m){

     }
  }

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
  

  
