#include <bits/stdc++.h>

typedef long long ll;
const long long mod = 1e9 + 7;

int main() {
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	int t;
	std::cin >> t;
	
	for (int i=0; i<t; i++) {
		ll a, b;
		std::cin >> a >> b;
		if (a > b) std::swap(a, b);
		if (b > a*2) {
			std::cout << "NO" << "\n";
		} else {
			a %= 3;
			b %= 3;
			if (a > b) std::swap(a, b);
			if ((a == 0 && b == 0) || (a == 1 && b == 2)) {
				std::cout << "YES" << "\n";
			} else {
				std::cout << "NO" << "\n";
			}
		}
	}
	return 0;
} 