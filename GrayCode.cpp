#include <bits/stdc++.h>

int gray (int n) {
	return n^(n/2);
}

std::string toBinary (int n, int s) {
	std::string res;
	for (int t=n; t; t/=2) {
		res += (t%2==0 ? '0' : '1');
	}
	for (int i=res.size(); i<s; i++) {
		res += '0';
	}
	std::reverse(res.begin(), res.end());
	return res;
}

int main() {
	
	int n;
	std::cin >> n;

	long long count = 1<<n;
	for (int i = 0; i<count; i++) {
		std::cout << toBinary(gray(i), n) << "\n";
	}
	return 0;
}
