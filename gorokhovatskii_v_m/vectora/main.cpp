#include<iostream>
#include<cmath>

struct Rdec2D{
    double x = 0.0;
    double y = 0.0;
};

struct Rpol2D{
    double r;
    double a;
};
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
//Rpol2D operator+(Rpol2D& rhs, Rpol2D& lhs){
    //return {ToPol(ToDec(rhs) + ToDec(lhs))};
//}
Rdec2D operator-(Rdec2D& rhs, Rdec2D& lhs){
    return {rhs.x - lhs.x, rhs.y - lhs.y};
}
//Rpol2D operator-(Rpol2D& rhs, Rpol2D& lhs){
    //return {ToPol(ToDec(rhs) - ToDec(lhs))};
//}
Rdec2D operator-(Rdec2D& rhs){
    return {(-1)*rhs.x, (-1)*rhs.y};
}
Rdec2D operator*(Rdec2D& rhs, double& a){
    return {rhs.x * a, rhs.y * a};
}
//Rpol2D operator*(Rpol2D& rhs, Rpol2D& lhs){
    //return {ToPol(ToDec(rhs) * ToDec(lhs))};
//}
Rdec2D operator/(Rdec2D& rhs, double& a){
    return {rhs.x / a, rhs.y / a};
}
//Rpol2D operator/(Rpol2D& rhs, Rpol2D& lhs){
    //return {ToPol(ToDec(rhs) / ToDec(lhs))};
//}
double dot(Rdec2D& rhs, Rdec2D& lhs){
    return {rhs.x * lhs.x + rhs.y * lhs.y};
}
//double dot(Rpol2D& rhs, Rpol2D& lhs){
    //Rdec2D temp_rhs, temp_lhs;
    //temp_rhs = ToDec(rhs);
    //temp_lhs = TOdec(lhs);
    //return {temp_rhs.x * temp_lhs.x + temp_rhs.y * temp_lhs.y};
//}
double norm(Rdec2D& rhs){
    return {sqrt(pow(rhs.x, 2) + pow(rhs.y, 2))};
}
//double norm(Rpol2D& rhs){
    //Rdec2D temp_rhs;
    //temp_rhs = ToDec(rhs);
    //return {sqrt(pow(temp_rhs.x, 2) + pow(temp_rhs.y, 2))};
//}
bool operator==(Rdec2D& rhs, Rdec2D& lhs){
    return {(rhs.x == lhs.x) && (rhs.y == lhs.y)};
}
//bool operator==(Rpol2D& rhs, Rpol2D& lhs){
    //Rdec2D temp_rhs, temp_lhs;
    //temp_rhs = ToDec(rhs);
    //temp_lhs = ToDec(lhs);
    //return {(temp_rhs.x == temp_lhs.x) && (temp_rhs.y == temp_lhs.y)};
//}
bool operator!=(Rdec2D& rhs, Rdec2D& lhs){
    return {!((rhs.x == lhs.x) && (rhs.y == lhs.y))};
}
//bool operator!=(Rpol2D& rhs, Rpol2D& lhs){
    //Rdec2D temp_rhs, temp_lhs;
    //temp_rhs = ToDec(rhs);
    //temp_lhs = ToDec(lhs);
    //return {!((temp_rhs.x == temp_lhs.x) && (temp_rhs.y == temp_lhs.y))};
//}
int main(){
    Rdec2D c{4.0, 3.0};
    Rpol2D x;
    x = ToPol(c);
    std::cout << "c=" << ToDec(x);
    return 0;
}