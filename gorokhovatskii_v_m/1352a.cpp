#include<iostream>
int main() {
	int t, k(0), b, a, delilka;
	std::cin >> t;
	for (int i = 0; i < t; i += 1) {
		std::cin >> b;
		a = b;
		delilka = 10;
		k = 0;
		while (b > 0) {
			if (b % delilka != 0) {
				k += 1;
				b -= b % delilka;
			}
			delilka *= 10;
		}
		std::cout << k << std::endl;
		delilka = 10;
		while (a > 0) {
			if (a % delilka != 0) {
				std::cout << a % delilka << ' ';
				a -= a % delilka;
			}
			delilka *= 10;
		}
		std::cout << std::endl;
	}
}