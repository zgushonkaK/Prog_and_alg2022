#include <iostream>
#include <cmath>
#include "veclibrary.hpp"

Rpol2D ToPol(Rdec2D& rhs){
    Rpol2D temp;
    temp.r = sqrt(pow(rhs.x, 2) + pow(rhs.y, 2));
    temp.a = acos(rhs.x/sqrt(pow(rhs.x, 2) + pow(rhs.y, 2)));
    return temp;
}
Rdec2D ToDec(Rpol2D& rhs){
    Rdec2D temp;
    temp.x = rhs.r * cos(rhs.a);
    temp.y = rhs.r * sin(rhs.a);
    return temp;
}
std::ostream& operator<<(std::ostream& out, const Rdec2D& c){
    return out << '(' << c.x << ',' << c.y << ')';
}
std::ostream& operator<<(std::ostream& out, const Rpol2D& c){
    return out << '(' << c.r << ',' << c.a << ')';
}
Rdec2D operator+(Rdec2D& rhs, Rdec2D& lhs){
    return {rhs.x + lhs.x, rhs.y + lhs.y};
}
Rdec2D operator-(Rdec2D& rhs, Rdec2D& lhs){
    return {rhs.x - lhs.x, rhs.y - lhs.y};
}
Rdec2D operator-(Rdec2D& rhs){
    return {(-1)*rhs.x, (-1)*rhs.y};
}
Rdec2D operator*(Rdec2D& rhs, double& a){
    return {rhs.x * a, rhs.y * a};
}
Rdec2D operator/(Rdec2D& rhs, double& a){
    return {rhs.x / a, rhs.y / a};
}
double dot(Rdec2D& rhs, Rdec2D& lhs){
    return {rhs.x * lhs.x + rhs.y * lhs.y};
}
double norm(Rdec2D& rhs){
    return {sqrt(pow(rhs.x, 2) + pow(rhs.y, 2))};
}
bool operator==(Rdec2D& rhs, Rdec2D& lhs){
    return {(rhs.x == lhs.x) && (rhs.y == lhs.y)};
}
bool operator!=(Rdec2D& rhs, Rdec2D& lhs){
    return {!((rhs.x == lhs.x) && (rhs.y == lhs.y))};
}