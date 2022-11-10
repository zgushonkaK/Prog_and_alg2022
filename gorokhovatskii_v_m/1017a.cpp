#include<iostream>

int main(){
    int n;
    std::cin >> n;
    int eng;
    int ger;
    int math;
    int hist;
    std::cin >> eng >> ger >> math >> hist;
    int sum = eng + ger + math + hist;
    int mesto = 1;
    for (int i = 1; i < n; i += 1){
        std::cin >> eng >> ger >> math >> hist;
        int curr_s;
        curr_s = eng + ger + math + hist;
        if (curr_s > sum){
            mesto += 1;
        }
    }
    std::cout << mesto;
}