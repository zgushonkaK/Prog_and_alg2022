#include "veclibrary.hpp"
#include <iostream>
void NormVec(Rdec2D& vec) {
	vec = vec / Norm(vec);
}

int TimeToCatch(const Rdec2D cat_pos, const Rdec2D mouse_pos, 
				const Rdec2D cat_speed, const Rdec2D mouse_speed,
				const double cat_range) {

	Rdec2D cat_dir = cat_pos;
  NormVec(cat_dir);
	Rdec2D mouse_dir = mouse_pos;
	NormVec(mouse_dir);

	int time = 0;

	//if (Norm(mouse_pos - cat_pos) < Norm(mouse_pos + mouse_speed -
	//	(cat_pos + cat_speed))) {
	//	return -1; //cant catch
	//}

	while (Norm(cat_pos - mouse_pos) > cat_range) {
		cat_dir = cat_dir + cat_speed;
		mouse_dir = mouse_dir + mouse_speed;
		time += 1;
	}

	return time;

}
int main(){
    Rdec2D r_c{5.0, 0};
    Rdec2D r_m{0, 3.0};
    Rdec2D v_m{0, 1.0};
    
}
