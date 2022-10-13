#include<iostream>
#include<vector>

int main(){
	int t;
	int n;
	std::cin >> t;
	for (int k = 0; k < t; k += 1){
		std::cin >> n;
		std::vector<int> v(n);
		for (int i = 0; i < n; i += 1){
			std::cin >> v[i];
		}
		
	}
	return 0;
}