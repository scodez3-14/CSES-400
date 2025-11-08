#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define all(x) (x).begin(), (x).end()
#define endl '\n'
#define int long long
// two knights  

void solve(){
   int k;
   cin>>k;
   for(int i=1;i<=k;i++){
     int tot=i*i*(i*i-1)/2;
     int attack=4*(i-1)*(i-2);
     cout<<tot-attack<<endl;
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
  
