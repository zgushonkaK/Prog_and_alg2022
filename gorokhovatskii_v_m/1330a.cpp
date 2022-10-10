#include<iostream>
#include<vector>
int main(){
	int t, n, x, a, max(0), c(0);
	std::cin >> t;
	for (int i = 0; i < t; i+=1){
		max = 0;
		std::vector<bool> tru(201);
		std::cin >> n >> x;
		for (int j = 0; j < n; j+= 1){
			std::cin >> a;
			tru[a] = true;
		}
		std::vector<int> v;
		for (int k = 1; k <= 201; k += 1){
			if (!tru[k]){
				x -= 1;
			} 
			if (x == 0){
				v.push_back(k);
			}
		}
		for (int g : v){
			if (g > max){
				max = g;
			}
		}
		std::cout << max << std::endl;
	}
	return 0;
}