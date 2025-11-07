#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define all(x) (x).begin(), (x).end()
#define endl '\n'
  
void solve(){
    string s;
    cin>>s;
    map<char,int> fr;
    for(char c:s) fr[c]++;

    int odd = 0;
    char mid = 0;
    for(auto &p:fr){
        if(p.second & 1){
            odd++;
            mid = p.first;
        }
    }

    if((s.size()%2==0 && odd>0) || (s.size()%2==1 && odd>1)){
        cout<<"NO SOLUTION\n";
        return;
    }

    string left = "";
    for(auto &p:fr){
        left += string(p.second/2, p.first);
    }

    string right = left;
    reverse(right.begin(), right.end());

    if(s.size()%2==1){
        cout << left << string(fr[mid]%2, mid) << right << "\n";
    }else{
        cout << left << right << "\n";
    }
}


int main(){
  int t;
  t=1;
  //cin>>t;
  while(t--){
    solve();
  }
}
