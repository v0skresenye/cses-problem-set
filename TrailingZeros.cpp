#include <bits/stdc++.h>

typedef long long ll;

int main() {
	// freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout)
	ll n;
	std::cin >> n;

	ll count2 = 3*n/4; 
	ll count5 = n/5;

	for (int i=2; i<=n/4; i+=2) {
		int tmp = i;
		while (tmp%2 == 0) {
			count2 += 1;
			tmp /= 2;
		}
	}
	for (int i=5; i<=n/5; i+=5) {
		int tmp = i;
		while (tmp%5 == 0) {
			count5 += 1;
			tmp /= 5;
		}
	}

	std::cout << std::min(count2, count5);
	return 0;
}
