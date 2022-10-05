#include<iostream>
#include<cmath>


int main(){
	std::cout << "x" << " " << "|" << " " << "s(x)" << " " << "|" << " " << "f(x)" << std::endl;
	std::cout.precision(5);
	double a = 0;
	double b = 1;
	double delta = 0.1;
	double eps = 0.0001;
	double s = 0;
	double i = 0;
	for (double x = a; x <= b; x += delta){
        int factorial(1);
		i = pow(pow(2*x,0), factorial);
		s = 0;
		for (int j = 1; j < 100; j += 1){
			if (std::abs(i) >= eps){
				s += i;
                factorial *= j;
                double pt1 = pow(2*x,j);
                double pt2 = factorial;
				i = pt1/pt2;
			} else {
				break;
			}
		}
		std::cout << x << " " << "|" << " " << s << " " << "|" << " " << exp(2*x) << std::endl;
	}
	return 0;
}