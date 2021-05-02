#include <bits/stdc++.h>

typedef long long ll;
const long long mod = 1e9 + 7;

int main() {
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	int n;
	std::cin >> n;
	ll res = 1;
	for (int i=1; i<=n; i++) {
		res = (res*2)%mod;
	}
	std::cout << res;
	return 0;
}