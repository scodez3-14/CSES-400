#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define all(x) (x).begin(), (x).end()
#define endl '\n'


//gray code has reflective property
//
//0 1 (n=1)
//0 1(0 0) | 1 0(1 1) (n=2)

vector<string> func(int n){
  if(n==1){
    return {"0","1"};
  }
  vector<string> prev = func(n-1);
  vector<string> ans;

  for(auto &x : prev) ans.push_back("0"+x);
  for(int i = prev.size()-1; i >= 0; i--) ans.push_back("1"+prev[i]);

  return ans;
}


void solve(){
  int n;
  cin>>n;
  vector<string>ans=func(n);
  for(string s:ans){
    cout<<s<<endl;
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
  
