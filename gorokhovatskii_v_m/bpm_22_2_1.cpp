#include<iostream>
#include<cmath>

int main(){
    std::cout << "x" << " " << "|" << " " << "s(x)" << std::endl;
    std::cout.precision(5);
    double a = 0.1;
    double b = 1.05;
    double delta = 0.05;
    double eps = 0.0001;
    double s = 0;
    double i = 0;

    for (double x = a; x <= b; x += delta){
        i = pow(-1, 0) * ((pow(x,2*0 +1))/(2*0 + 1));
        s = 0;
        for (int j = 1; j < 5002; j += 1){
            if (std::abs(i) > eps) {
                s += i;
                i = pow(-1, j) * ((pow(x, 2 * j + 1)) / (2 * j + 1));
            } else{
                break;
            }
        }
        std::cout << x << " " << "|" << " " << s << std::endl;
    }
}