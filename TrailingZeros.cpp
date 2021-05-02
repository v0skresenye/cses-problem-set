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

/**
20! = 1*2*3*(2*2)*5*(2*3)*7*(2*2*2)
      2*(2*2)*(2)*(2*2*2) = 2^k

// 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 ... n
//   2   2   2   2    2     2     2     2
//       2       2          2           2
//               2                      2
//                                      2

i :  4 8 12 16 20
tmp: 2 4 6 8 10

25 50 75 100 125 150

 5  5  5   5   5   5
               5  

*/