#include <iostream>
#include "geom.hpp"

int main(){
    Rdec2D c{4.0, 3.0};
    Rdec2D c1{5.0, 6.0};
    double a = 5.0;
    std::cout << "c=" << c << " " << "c1=" << c1 << std::endl;
    std::cout << "c + c1 = " << c + c1 << std::endl;
    std::cout << "c - c1 = " << c - c1 << std::endl;
    std::cout << "-c = " << -c << std::endl;
    std::cout << "dot(c,c1) = " << dot(c,c1) << std::endl;
    std::cout << "norm(c) = " << norm(c) << std::endl;
    std::cout << "c * 5 = " << c * a << std::endl;
    std::cout << "c / 5 = " << c / a << std::endl;
    std::cout << "ToPol(c) = " << ToPol(c) << std::endl;
    return 0;
}
