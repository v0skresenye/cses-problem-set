#include <bits/stdc++.h>

int main() {
	int n;
	std::cin >> n;
	long long moves = 0;
	long long tmp;
	for (int i=0; i<n; i++) {
		long long el;	
		std::cin >> el;
		if (i == 0) {
			tmp = el;
		}
		if (tmp > el) {
			moves += (tmp-el);
		} else if (el > tmp) {
			tmp = el;
		}
	}
	std::cout << moves;
	return 0;
}