include <bits/stdc++.h>
using namespace std;
 
int main() {
	long long n, m, b = 1, res = 0;
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int a;
		cin >> a;
		res += (b <= a) * (a - b) + (b > a) * (n + a - b);
		b = a;
	}
	cout << res;
}
