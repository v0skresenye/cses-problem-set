#include <bits/stdc++.h>

std::string orig, res;
std::map<char, int> let;
int counter;
char center;

int main() {
	std::cin >> orig;

	for (auto el : orig) 
		let[el] += 1;	
	for (const auto& item : let)
		counter += item.second % 2;

	if (counter > 1) {
		std::cout << "NO SOLUTION" << "\n";
		return 0;
	}
	for (const auto& item : let) {
		for (int i=0; i<item.second/2; i++)
			res += item.first;

		if (item.second % 2 == 1) 
			center = item.first;
	}


	std::cout << res;
	if (center) 
		std::cout << center;
	std::reverse(res.begin(), res.end());
	std::cout << res;
	return 0;
}