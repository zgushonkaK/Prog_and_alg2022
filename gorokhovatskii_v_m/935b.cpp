#include<iostream>
#include<string>

int main(){
	int n;
	int xpos = 0;
	int ypos = 0;
	int oldxpos = 0;
	int oldypos = 0;
	int count = 0;
	int flagx = 0;
	int flagy = 0;
	std::string s;
	std::cin >> n;
	std::cin >> s;
	for (int i = 0; i < n; i += 1){
		oldxpos = xpos;
		oldypos = ypos;
		if (s[i] == 'U'){
			ypos += 1;
		} else if(s[i] == 'R'){
			xpos += 1;
		}
		if (flagx == 1){
			if (xpos > oldxpos){
				count += 1;
			}
			flagx = 0;
		}
		if (flagy == 1){
			if (ypos > oldypos){
				count += 1;
			}
			flagy = 0;
		}
		if (xpos == ypos){
			if ((xpos - oldxpos) > 0){
				flagx = 1;
			}
			if ((ypos - oldypos) > 0){
				flagy = 1;
			}
		}
	}
	std::cout << count;
	return 0;
}