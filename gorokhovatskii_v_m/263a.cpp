#include <iostream>
int i, a, j(0);
int main() {
	for (j; j < 25; j+= 1) {
		std::cin >> a;
		if (a == 1) {
			i = j;
		}
	}
	if ((i == 0) || (i == 4) || (i == 20) || (i == 24)) {
		std::cout << 4;
	}
	if ((i == 1) || (i == 3) || (i == 5) || (i == 9) || (i == 19) || (i == 23) || (i == 21) || (i == 15)) {
		std::cout << 3;
	}
	if ((i == 2) || (i == 10) || (i == 14) || (i == 22) || (i == 6) || (i == 8) || (i == 16) || (i == 18)) {
		std::cout << 2;
	}
	if ((i == 7) || (i == 13) || (i == 17) || (i == 11)) {
		std::cout << 1;
	}
	if (i == 12) {
		std::cout << 0;
	}
	return 0;
}