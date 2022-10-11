#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

int kokoro(int64_t a, int64_t b){
	int64_t sumka;
	std::vector<int64_t> res;
	if (a>b){
		while (a>0){
			if (b<=0){
				b = 0;
			}
			sumka = ((a%3) + (b%3)) % 3;
			res.push_back(sumka);
			a /= 3;
			b /= 3;
		}
	} else{
		while (b>0){
			if (a<=0){
				a = 0;
			}
			sumka = ((a%3) + (b%3)) % 3;
			res.push_back(sumka);
			a /= 3;
			b /= 3;
			}
	}
	std::reverse(res.begin(), res.end());
	int res10 = 0;
	int ln = (res.end() - res.begin()) - 1;
	for (int g : res){
		res10 += g * pow(3,ln);
		ln -= 1;
	}
	return res10;
}

int main(){
	int64_t a;
	int64_t c;
	std::cin >> a >> c;
	int64_t maxi = pow(10, 9);
	for (int64_t x = 0; x <= maxi; x += 1 ){
		if (kokoro(a,x) == c){
			std::cout << x;
			break;
		} else{
			continue;
		}
	}
	return 0;
}