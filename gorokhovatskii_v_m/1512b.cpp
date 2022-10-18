#include<iostream>
#include<vector>
#include<string>

int main(){
	int t;
	std::cin >> t;
	int xpos  = 0;
	int ypos = 0;
	int xpos2 = 0;
	int ypos2 = 0;
	int newxpos = 0;
	int newypos = 0;
	for (int k = 0; k < t; k+= 1){
		int n;
		std::cin >> n;
		for (int i = 0; i < n; i += 1){
			for (int i2 = 0; i2 < n; i2 += 1){
				char l;
				std::cin >> l;
				if (!(xpos && ypos)){
					if (l == '*'){
						xpos = i;
						ypos = i2;
					}
				} else{
					if (l == '*'){
						xpos2 = i;
						ypos2 = i2;
					}
				}
			}
		}
		if (xpos - xpos2 == 0){
			if (xpos == 0){
				newxpos = (xpos + 1);
				newypos = ypos;
			} else{
				newxpos = (xpos - 1);
				newypos = ypos;
			}
		}
		if (ypos - ypos2 == 0){
			if (ypos == 0){
				newypos = (ypos + 1);
				newxpos = xpos;
			} else{
				newypos = (ypos - 1);
				newxpos = xpos;
			}
		}
		for (int i = 0; i < n; i += 1){
			for (int i2 = 0; i2 < n; i2 += 1){
				if ((i == xpos || i == newxpos) && (i2 == ypos || i2 == newypos)){
					std::cout << '*';
				}
				else{
					std::cout << '.';
				}
			}
			std::cout << std::endl;
		}
	}
	return 0;
}