#define _USE_MATH_DEFINES
#include<iostream>
#include<cmath>
 
int main(){
    std::cout.precision(8);
    double n,r;
    double R;
    std::cin >> n >> r;
    R = r * ((sin(M_PI / n)) / (1 - sin(M_PI / n)));
    std::cout << R;
    return 0;
}