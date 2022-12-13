#include <iostream>
#include <fstream>
#include "geom.hpp"

void Life_or_death(const double& dt, const double& mod_u_m_start, Rdec2D& r_m, const double& mod_u_c_start, Rdec2D& r_c, const double& r_kill) {
    std::ofstream file("data.txt");
    Rdec2D u_m = (Rdec2D{ 0.0, 0.0 } - r_m) / norm(Rdec2D{ 0.0, 0.0 } - r_m) * mod_u_m_start;
    Rdec2D dr_m;
    Rdec2D past_r_m = r_m;

    Rdec2D u_c = (r_m - r_c) / norm(r_m - r_c) * mod_u_c_start;
    Rdec2D dr_c;
    Rdec2D past_r_c = r_c;

    for (int t = 0; t < 1000; t += dt) {
        u_m = (Rdec2D{ 0.0, 0.0 } - r_m) / norm(Rdec2D{ 0.0, 0.0 } - r_m) * mod_u_m_start;
        dr_m = u_m * dt;
        r_m = r_m + dr_m;

        u_c = (r_m - r_c) / norm(r_m - r_c) * mod_u_c_start;
        dr_c = u_c * dt;
        r_c = r_c + dr_c;

        if (r_m.y >= 0) {
            std::cout << "mouse won" << std::endl <<  "time:" << t;
            break;
        }
        else {
            if (norm(r_m - r_c) <= r_kill) {
                std::cout << "mouse died" << std::endl <<  "time:" << t;
                break;
            }
            else {
                if (norm(r_m - r_c) > norm(past_r_m - past_r_c)) {
                    std::cout << "mouse will win" << std::endl <<  "time:" << t;
                    break;
                }
            }
        }
        past_r_m = r_m;
        past_r_c = r_c;
    }
}

int main(){
    double dt = 1;
    double mod_v_m = 0.5;
    double mod_v_c = 0.3;
    Rdec2D r_m = {0, -10.0};
    Rdec2D r_c = {8.0, 0};
    double kill_area = 0.2;
    Life_or_death(dt, mod_v_m, r_m, mod_v_c, r_c, kill_area);
    return 0;
}
