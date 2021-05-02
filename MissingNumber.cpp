#include <bits/stdc++.h>

int main() {
	int n;
	std::cin >> n;
	std::set<int> els;
	for (int i=1; i<=n; i++) {
		els.insert(els.end(), i);
	}
	for (int i=0; i<n-1; i++) {
		int counter;
		std::cin >> counter;
		els.erase(counter);
	}
	std::cout << *els.begin();
	return 0;
}