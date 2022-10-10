#include<iostream>
#include<vector>
int main(){
	int t, n, k, r, c;
	std::cin >> t;
	for (int i = 0; i < t; i += 1){
		std::cin >> n >> k >> r >> c;
		for (int j = 1; j <= n; j+=1){
			for (int h = 1; h <= n; h +=1 ){
				if (((j + h) % k) == ((r + c) % k)){
					std::cout << "X";
				} else{
					std::cout << ".";
				}
			}
			std::cout << std::endl;
		}
 
	}
	return 0;
}