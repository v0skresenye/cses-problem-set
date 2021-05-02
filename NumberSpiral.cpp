#include <bits/stdc++.h>

int main() {
	int t;
	std::cin >> t;

	for (int i=0; i<t; i++) {
		long long x, y, el;
		std::cin >> x >> y;
		if (x > y) {
			if (x%2 == 0) {
				el = x*x - y + 1;
			} else {
				el = (x-1)*(x-1) + y;
			}
		} else {
			if (y%2 == 1) {
				el = y*y - x + 1;
			} else {
				el = (y-1)*(y-1) + x;
			}
		}
		std::cout << el << "\n";
	}
	return 0;
}