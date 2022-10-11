#include<iostream>
#include<vector>

int main(){
	int t;
	std::cin >> t;
	for (int k = 0; k < t; k += 1){
		int n;
		std::cin >> n;
		std::vector<int> v(n);
		for (int i = 0; i < n; i += 1){
			std::cin >> v[i];
		}
		int r = v[0];
		for (int j = 1; j < n; j += 1){
			r &= v[j];
		}
		std::cout << r << std::endl;
	}
}