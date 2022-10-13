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
	int nxpos = 0;
	int nypos = 0;
	int nxpos2 = 0;
	int nypos2 = 0;
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
		if (xpos = xpos2){
			if (xpos == 0 && xpos2 == 0){
				nxpos = nxpos + 1;
				nxpos2 = nxpos2 + 1;
				 
			}
		}
	}
	return 0;
}