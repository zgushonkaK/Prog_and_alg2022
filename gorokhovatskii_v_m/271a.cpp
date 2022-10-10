#include <iostream>
using namespace std;
int x, a, b, c, g;
int main() {
	cin >> g;
	for (g += 1; g <= 9999; g += 1) {
		x = g;
		a = x % 10;
		x = x / 10;
		b = x % 10;
		x = x / 10;
		c = x % 10;
		x = x / 10;
		if (a != b & b != c & c != x & a != c & a != x & b != x & c != a) {
			break;
		}
		else {
			continue;
		}
	}
	cout << g;
	return 0;
}