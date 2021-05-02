#include <bits/stdc++.h>

int main() {
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	int n;
	std::cin >> n;
	long long sum = 0;

	// calculating sum
	for (int i=1; i<=n; i++) {
		sum += i;
	}
	// the sum can't be calculated
	if (sum%2 == 1) {
		std::cout << "NO";

	} else {
		std::cout << "YES" << "\n";

		long long res = 0;

		std::set<int> set1;
		std::set<int> set2;

		for (int j=1; j<=n; j++) {

			res += j;
			set1.insert(j);

			if (res > sum/2) {
				set1.erase(res-sum/2);
				set2.insert(res-sum/2);

				for (int k=j+1; k<=n; k++) {
					set2.insert(k);
				}
				break;
			} else if (res == sum/2) {
				for (int k=j+1; k<=n; k++) {
					set2.insert(k);
				}
				break;
			}
		}


		std::cout << set1.size() << "\n";
		for (auto el : set1) {
			std::cout << el << " ";
		}

		std::cout << "\n";
		std::cout << set2.size() << "\n";
		for (auto el : set2) {
			std::cout << el << " ";
		}
	} 
	return 0;
}