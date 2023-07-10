#include <iostream>
using namespace std;
int f[105][2];
int main() {
int n, k, d, m = 1000000007;
cin >> n >> k >> d;
f[0][1] = 1;
for (int i = 1; i <= n; i++) {
for (int j = 1; j <= min(i, k); j++) {
f[i][0] = (f[i][0] + f[i - j][j >= d]) % m;
f[i][1] = (f[i][1] + f[i - j][1]) % m;
}
}
cout << f[n][0];
return 0;
}
