#include <iosfwd>
struct Rdec2D{
    double x = 0.0;
    double y = 0.0;
};

struct Rpol2D{
    double r;
    double a;
};

Rpol2D ToPol(Rdec2D& rhs);

Rdec2D ToDec(Rpol2D& rhs);

std::ostream& operator<<(std::ostream& out, const Rdec2D& c);

std::ostream& operator<<(std::ostream& out, const Rpol2D& c);

Rdec2D operator+(Rdec2D& rhs, Rdec2D& lhs);

Rdec2D operator-(Rdec2D& rhs, Rdec2D& lhs);

Rdec2D operator-(Rdec2D& rhs);

Rdec2D operator*(Rdec2D& rhs, double& a);

Rdec2D operator/(Rdec2D& rhs, double& a);

double dot(Rdec2D& rhs, Rdec2D& lhs);

double norm(Rdec2D& rhs);

bool operator==(Rdec2D& rhs, Rdec2D& lhs);

bool operator!=(Rdec2D& rhs, Rdec2D& lhs);