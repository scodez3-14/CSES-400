#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define all(x) (x).begin(), (x).end()
#define endl '\n'

void solve(){
    int n;
    cin >> n;
    vector<long double> r(n);
    for (int i = 0; i < n; i++) cin >> r[i];

    long double ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            long double a = r[i], b = r[j], p;
            if (a < b) p = (a - 1) / (2 * b);
            else if( a > b) p = 1 - (b + 1) / (2 * a);
            else p = (a - 1) / (2 * a);
            ans += p;
        }
    }

    // Proper banker's rounding implementation
    long double value = ans;
    long double scaled = value * 1'000'000;
    
    // Extract integer and fractional parts reliably
    long long integer_part = (long long)scaled;
    long double fractional = scaled - integer_part;
    
    // Banker's rounding: round half to even
    if (fractional > 0.5 + 1e-12) {
        integer_part += 1;
    } else if (abs(fractional - 0.5) < 1e-12) {
        // Round half to even - check if integer part is odd
        if (integer_part % 2 == 1) {
            integer_part += 1;
        }
    }
    // If fractional < 0.5, integer_part stays the same

    long double result = (long double)integer_part / 1'000'000;
    cout << fixed << setprecision(6) << result << "\n";
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
