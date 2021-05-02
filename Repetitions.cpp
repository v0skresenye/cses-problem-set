#include <bits/stdc++.h>

int main() {
	std::string s;
	std::cin >> s;
	int counter = 0;
	int res = 0;
	for (int i=0; i<s.size(); i++) {
		if (i>0) {
			if (s[i]==s[i-1]) {
				counter += 1;
				res = std::max(res, counter);
			} else {
				res = std::max(res, counter);
				counter = 1;
			}
		} else {
			counter = 1;
			res = std::max(res, counter);
		}
	}
	std::cout << res;
	return 0;
}