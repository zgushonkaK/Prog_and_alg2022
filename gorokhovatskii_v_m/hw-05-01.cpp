#include<iostream>
#include<cmath>
int factorial(int i)
{
  if (i==0) return 1;
  else return i*factorial(i-1);
}


int main(){
	std::cout << "x" << " " << "|" << " " << "s(x)" << " " << "|" << " " << "f(x)" << std::endl;
	std::cout.precision(5);
	double a = -1;
	double b = 1;
	double delta = 0.1;
	double eps = 0.001;
	double s = 0;
	double i = 0;
	for (double x = a; x <= b; x += delta){
		i = 1;
		s = 0;
		for (int j = 1; j < 100; i += 1){
			if (abs(i) >= eps){
				s += i;
				i = pow(-1, j) * pow(x, 2 * j) / factorial(2 * j);
			} else {
				break;
			}
		}
		std::cout << x << " " << "|" << " " << s << " " << "|" << " " << cos(x) << std::endl;
	}
	std::cout << x << " " << "|" << " " << s << " " << "|" << " " << cos(x) << std::endl;
	return 0;
}