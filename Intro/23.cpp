#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define len(x) int((x).size())

bool ok(vector<int>& f){
    int mx = 0, sum = 0;
    for(int x:f){
        mx = max(mx,x);
        sum += x;
    }
    return mx <= (sum + 1) / 2;
}

void solve() {
    string s; cin >> s;
    int n = len(s);

    vector<int> f(26,0);
    for(char c:s) f[c-'A']++;

    string ans;
    ans.reserve(n);
    char last = '#';

    for(int pos=0;pos<n;pos++){
        bool chosen = false;
        for(int c=0;c<26;c++){
            if(f[c]==0) continue;
            if(char('A'+c)==last) continue;
            f[c]--;
            if(ok(f)){
                ans.push_back('A'+c);
                last='A'+c;
                chosen=true;
                break;
            }
            f[c]++;
        }
        if(!chosen){
            cout<<-1<<nl;
            return;
        }
    }

    cout<<ans<<nl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}

