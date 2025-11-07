#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define all(x) (x).begin(), (x).end()
#define endl '\n'
  
void solve(){
  int n;
  cin >> n;
  long long sum = 1LL * n * (n + 1) / 2;
  if(sum & 1){
    cout << "NO\n";
    return;
  }
  cout << "YES\n";
  long long need = sum / 2;
  set<int> a;
  long long cur = 0;

  for(int i = 0; i < n/2; i++){
    int x = i + 1;
    int y = n - i;
    if(cur + x + y > need){
      long long diff = need - cur;
      a.insert(diff);
      break;
    }
    a.insert(x);
    a.insert(y);
    cur += x + y;
    if(cur == need) break;
  }

  cout << a.size() << "\n";
  for(int x : a) cout << x << " ";
  cout << "\n";

  cout << n - a.size() << "\n";
  for(int i = 1; i <= n; i++){
    if(!a.count(i)) cout << i << " ";
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
  
