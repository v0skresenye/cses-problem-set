#include <bits/stdc++.h>

int mod3 (int n) {
	if (n%3 == 0) {
		return 3;
	}
	return n%3;
}

// returns a vector for even steps where the numbers
// of rings are stored
std::vector<int> even_step (int n) {
	std::vector<int> res = {3};
	if (n == 3) {
		return res;
	} else {
		std::vector<int> resn;
		resn = even_step(n-1);
		res = resn;
		res.push_back(n);
		res.insert(res.end(), resn.begin(), resn.end());
		return res;
	}
}

void hanoi_2 (int& k, int n) {
	if (n%2 == 0) {
		std::cout << k << " " << mod3(k+1) << "\n";
		std::cout << k << " " << mod3(k+2) << "\n";
		std::cout << mod3(k+1) << " " << mod3(k+2) << "\n";
		k = mod3(k+2);
	} else {
		std::cout << k << " " << mod3(k+2) << "\n";
		std::cout << k << " " << mod3(k+1) << "\n";
		std::cout << mod3(k+2) << " " << mod3(k+1) << "\n";
		k = mod3(k+1);
	}
}

void hanoi (int l, int n) {
	int k = 1;
	if (n == 1) {
		std::cout << "1 3" << "\n";
	} else if (n == 2) {
		hanoi_2(k, n);
	} else {
		std::vector<int> positions(n+1, 1); // vector of 1s for each ring
		std::vector<int> even_moves = even_step(n); // sequence of rings for even moves
		int count_step = 0;

		for (int i=1; i<=l; i++) {
			if (i%2 == 1) { // uneven moves
				hanoi_2(k, n);
				i += 2;
			} else { // even moves
				int ring = even_moves[count_step]; 
				int plus_k = 1 + (ring+1-n%2)%2;
				std::cout << positions[ring] << " " << mod3(positions[ring] + plus_k) << "\n"; // 3 
				positions[ring] = mod3(positions[ring] + plus_k);
				count_step += 1;
			}
		}
			
	}
}

int main() {
	int n;
	std::cin >> n;
	int l = (1<<n) - 1;
	std::cout << l << "\n";
	hanoi(l, n);
	return 0;
}