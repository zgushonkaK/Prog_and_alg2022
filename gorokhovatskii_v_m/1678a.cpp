#include<iostream>
#include<vector>
#include<algorithm>

int main(){
	int t;
	int n;
	std::cin >> t;
	for (int k = 0; k < t; k += 1){
		int flag = 0;
		int flag1 = 0;
		int count0 = 0;
		std::cin >> n;
		std::vector<int> v(n);
		for (int i = 0; i < n; i += 1){
			std::cin >> v[i];
			if (v[i] == 0){
				flag1 = 1;
				count0 += 1;
			}
			
		}
		if (flag1){
			std::cout << n - count0 << std::endl;
			continue;
		}
		for (int i = 0; i < n; i += 1){
			for (int y = (i + 1); y < n; y += 1 ){
				if (v[i] == v[y]){
					flag = 1;
				}
			}
		}
		if (flag == 1){
			std::cout << n << std::endl;
			continue;
		} else{
			std::cout << n + 1 << std::endl;
		}
	}
	return 0;
}