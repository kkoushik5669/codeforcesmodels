#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    ll a, b;
    cin >> s >> a >> b;
    vector<ll> pr((ll)s.size(), 0);
    pr[0] = (s[0] - '0') % a;
    for (ll i = 1; i < (ll)s.size(); ++i) pr[i] = (pr[i - 1] * 10 + s[i] - '0') % a;
    for (ll j = (ll)s.size() - 1, p = 1, x = 0; j > 0; --j) {
        x = (x + p * (s[j] - '0')) % b, p = (p * 10) % b;
        if (x == 0 && s[j] != '0' && pr[j - 1] == 0) return cout << "YES\n" << s.substr(0, j) << "\n" << s.substr(j, (ll)s.size() - j), 0;
    }
    cout << "NO";
}
