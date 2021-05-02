#include <bits/stdc++.h>
 
#define ll long long
 
int main(){
	ll n;
	std::cin >> n;
	if(n == 2 || n == 3) {
		std::cout << "NO SOLUTION" << "\n";
	}
	else {
		for(int i = 1; i <= n ; i++){
			if(i % 2 == 0) std::cout << i << " "; 
		}
		for(int i = 1 ; i <= n ; i++){
			if(i%2 == 1) std::cout << i << " ";
		}
		std::cout << "\n";
	}
	return 0;
}