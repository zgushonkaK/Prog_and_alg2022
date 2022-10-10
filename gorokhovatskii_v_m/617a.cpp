#include <iostream>
using namespace std;
int a;
int main() {
	cin >> a;
	if (a <= 5) {
		cout << 1;
	} else {
		if (a % 5 == 0){
			cout << a / 5;
		} else {
			cout << (a / 5) + 1;
		}
	}
	return 0;
}