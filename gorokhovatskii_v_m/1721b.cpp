#include<iostream>
#include <cmath>
#include <iomanip> 
int main(){
	int g, n, m, sx, sy, d;
	std::cin >> g;
	for (int i = 0; i < g; i += 1){
		std::cin >> n >> m >> sx >> sy >> d;
		if ((std::min(sx -1, m - sy) <= d) & (std::min(n-sx, sy -1) <= d) ){
			std::cout << "-1" << std::endl;
		} else{
			std::cout << ((n + m) - 2) << std::endl;
		}
	}
 
	return 0;
}	