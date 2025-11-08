#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define all(x) (x).begin(), (x).end()
#define endl '\n'
  
void recur(string &s,string &curr,vector<bool> &used, vector<string> &out){
    if(curr.size()==s.size()){
        out.push_back(curr);
        return;
    }
    int n=s.size();
    for(int i=0;i<n;i++){
        if(used[i]) continue;
        if(i>0 && s[i]==s[i-1] && !used[i-1]) continue;
        used[i]=true;
        curr.push_back(s[i]);
        recur(s,curr,used,out);
        curr.pop_back();
        used[i]=false;
    }
}

void solve(){
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    vector<bool> used(s.size(),false);
    vector<string> out;
    string curr;
    recur(s,curr,used,out);
    cout<<out.size()<<endl;
    for(auto &x : out) cout<<x<<endl;
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
  
