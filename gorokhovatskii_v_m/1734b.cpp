#include<iostream>

int main(){
	int t;
	std::cin >> t;
	for (int i = 0;  i < t; i += 1){
		int n;
		std::cin >> n;
		for (int k = 1; k <= n; k += 1){
			for (int j = 1; j <= k; j += 1){
				if (j == 1 || j == k){
					std::cout << 1 << " ";
				} else{
					std::cout << 0 << " ";
				}
			}
			std::cout << std::endl;
		}
	}
	return 0;
}