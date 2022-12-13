#include <iosfwd>
struct Rdec2D{
    double x = 0.0;
    double y = 0.0;
};

struct Rpol2D{
    double r = 0.0;
    double a = 0.0;
};

Rpol2D ToPol(const Rdec2D& rhs);

Rdec2D ToDec(const Rpol2D& rhs);

std::ostream& operator<<(std::ostream& out, const Rdec2D& c);

std::ostream& operator<<(std::ostream& out, const Rpol2D& c);

Rdec2D operator+(const Rdec2D& rhs, const Rdec2D& lhs);

Rdec2D operator-(const Rdec2D& rhs, const Rdec2D& lhs);

Rpol2D operator+(const Rpol2D& rhs, const Rpol2D& lhs);

Rdec2D operator-(const Rdec2D& rhs);

Rdec2D operator*(const Rdec2D& rhs,const double& a);

Rdec2D operator/(const Rdec2D& rhs, const double& a);

double dot(const Rdec2D& rhs, const Rdec2D& lhs);

double norm(const Rdec2D& rhs);

bool operator==(const Rdec2D& rhs, const Rdec2D& lhs);

bool operator!=(const Rdec2D& rhs, const Rdec2D& lhs);

Rpol2D operator+(const Rpol2D& rhs, const Rpol2D& lhs);

Rpol2D operator-(const Rpol2D& rhs, const Rpol2D& lhs);

Rpol2D operator*(const Rpol2D& rhs, const double& a);

Rpol2D operator/(const Rpol2D& rhs, const double& a);

double dot(const Rpol2D& rhs, const Rpol2D& lhs);

double norm(const Rpol2D& rhs);

bool operator==(const Rpol2D& rhs, const Rpol2D& lhs);

bool operator!=(const Rpol2D& rhs, const Rpol2D& lhs);
