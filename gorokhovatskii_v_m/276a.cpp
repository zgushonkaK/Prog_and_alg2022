#include<iostream>
#include<vector>
int a, b, n, k;
std::vector<int> v;
int main() {
	std::cin >> n >> k;
	for (int i = 0; i < n; i += 1) {
		std::cin >> a >> b;
		if (b < k) {
			v.push_back(a);
		}
		else {
			v.push_back(a - (b - k));
		}
	}
	int max(-10000000000);
	for (int j : v) {
		if (j > max) {
			max = j;
		}
	}
	std::cout << max;
	return 0;
}