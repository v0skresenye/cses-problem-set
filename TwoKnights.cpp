#include <bits/stdc++.h>

long long Comb(long long num) {
	long long res = (num*num * (num*num - 1))/2;
	return res;
}

int main() {
	int n;
	std::cin >> n;
	int tmp = 0;
	for (int k=1; k<=n; k++) {
		int counter = 1;
		long long res = Comb(k);

		if (k == 1) {
			res = 0;
		} else {
			res -= 8*tmp;
			tmp += k-1;
		}
		std::cout << res << "\n";
	}
	return 0;
}