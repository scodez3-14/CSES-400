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
  int n,m;
  cin>>n>>m;
  vector<string> a(n);
  for(int i=0;i<n;i++) cin>>a[i];
    
  vector<string> b(n,string(m,'A'));
  string s="ABCD";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            for(char c:s){
                if(c==a[i][j]) continue;
                if(i>0 && b[i-1][j]==c) continue;
                if(j>0 && b[i][j-1]==c) continue;
                b[i][j]=c;
                break;
            }
        }
    }
    
    for(int i=0;i<n;i++) cout<<b[i]<<"\n";
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
  
