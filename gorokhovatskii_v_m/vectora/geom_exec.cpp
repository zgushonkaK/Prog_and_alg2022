#include <iostream>
#include <cmath>
#include "veclibrary.hpp"

Rpol2D ToPol(const Rdec2D& rhs){
    Rpol2D temp;
    temp.r = sqrt(pow(rhs.x, 2) + pow(rhs.y, 2));
    temp.a = acos(rhs.x/sqrt(pow(rhs.x, 2) + pow(rhs.y, 2)));
    return temp;
}
Rdec2D ToDec(const Rpol2D& rhs){
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
Rdec2D operator+(const Rdec2D& rhs, const Rdec2D& lhs){
    return {rhs.x + lhs.x, rhs.y + lhs.y};
}
Rdec2D operator-(const Rdec2D& rhs, const Rdec2D& lhs){
    return {rhs.x - lhs.x, rhs.y - lhs.y};
}
Rdec2D operator-(const Rdec2D& rhs){
    return {(-1)*rhs.x, (-1)*rhs.y};
}
Rdec2D operator*(const Rdec2D& rhs,const double& a){
    return {rhs.x * a, rhs.y * a};
}
Rdec2D operator/(const Rdec2D& rhs,const double& a){
    return {rhs.x / a, rhs.y / a};
}
double dot(const Rdec2D& rhs, const Rdec2D& lhs){
    return {rhs.x * lhs.x + rhs.y * lhs.y};
}
double norm(const Rdec2D& rhs){
    return {sqrt(pow(rhs.x, 2) + pow(rhs.y, 2))};
}
bool operator==(const Rdec2D& rhs, const Rdec2D& lhs){
    return {(rhs.x == lhs.x) && (rhs.y == lhs.y)};
}
bool operator!=(const Rdec2D& rhs, const Rdec2D& lhs){
    return {!((rhs.x == lhs.x) && (rhs.y == lhs.y))};
}
Rpol2D operator+(const Rpol2D& rhs, const Rpol2D& lhs){
    return ToPol(ToDec(rhs) + ToDec(lhs));
}
Rpol2D operator-(const Rpol2D& rhs, const Rpol2D& lhs){
    return {ToPol(ToDec(rhs) - ToDec(lhs))};
}
Rpol2D operator*(const Rpol2D& rhs,const double& a){
    return {ToPol(ToDec(rhs) * a)};
}
Rpol2D operator/(const Rpol2D& rhs, const double& a){
    return {ToPol(ToDec(rhs) / a)};
}
double dot(const Rpol2D& rhs, const Rpol2D& lhs){
    Rdec2D temp_rhs, temp_lhs;
    temp_rhs = ToDec(rhs);
    temp_lhs = ToDec(lhs);
    return {temp_rhs.x * temp_lhs.x + temp_rhs.y * temp_lhs.y};
}
double norm(const Rpol2D& rhs){
    Rdec2D temp_rhs;
    temp_rhs = ToDec(rhs);
    return {sqrt(pow(temp_rhs.x, 2) + pow(temp_rhs.y, 2))};
}
bool operator==(const Rpol2D& rhs, const Rpol2D& lhs){
    Rdec2D temp_rhs, temp_lhs;
    temp_rhs = ToDec(rhs);
    temp_lhs = ToDec(lhs);
    return {(temp_rhs.x == temp_lhs.x) && (temp_rhs.y == temp_lhs.y)};
}
bool operator!=(const Rpol2D& rhs, const Rpol2D& lhs){
    Rdec2D temp_rhs, temp_lhs;
    temp_rhs = ToDec(rhs);
    temp_lhs = ToDec(lhs);
    return {!((temp_rhs.x == temp_lhs.x) && (temp_rhs.y == temp_lhs.y))};
}
