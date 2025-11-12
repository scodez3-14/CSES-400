#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int MAXA = 1e6;
int mu[MAXA + 1];
bool isComp[MAXA + 1];
vector<int> primes;
int freq[MAXA + 1], cnt[MAXA + 1];

void mobius_sieve() {
    mu[1] = 1;
    for (int i = 2; i <= MAXA; i++) {
        if (!isComp[i]) {
            primes.push_back(i);
            mu[i] = -1;
        }
        for (int p : primes) {
            if (i * 1LL * p > MAXA) break;
            isComp[i * p] = true;
            if (i % p == 0) {
                mu[i * p] = 0;
                break;
            } else {
                mu[i * p] = -mu[i];
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    mobius_sieve();

    int n;
    cin >> n;
    vector<int> a(n);
    for (int &x : a) {
        cin >> x;
        freq[x]++;
    }
    for (int v = 1; v <= MAXA; v++) {
        for (int x = v; x <= MAXA; x += v)
            cnt[v] += freq[x];
    }

    ll ans = 0;
    for (int v = 1; v <= MAXA; v++) {
        if (mu[v] == 0) continue;
        ll c = cnt[v];
        ans += 1LL * mu[v] * (c * (c - 1) / 2);
    }

    cout << ans << '\n';
}

