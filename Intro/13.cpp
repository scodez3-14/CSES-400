#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define all(x) (x).begin(), (x).end()
#define endl '\n'
  
string func(int i,int n){
  // n is len
  // i is the number

}

void solve(){
  int n;
  cin>>n;
  for(int i=0;i<(1<<n);i++){
    string s = bitset<64>(i).to_string().substr(64 - n);
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
  
