#include<iostream>

int main(){
    int64_t n;
    int64_t k;
    int max_power = -1;
    std::cin >> n >> k;
    if (k >= (n-1)){
        while(n--){
            int power;
            std::cin >> power;
            if (power > max_power){
                max_power = power;
            }
        }
        std::cout << max_power;
    } else{
        std::cin >> max_power;
        n -= 1;
        while(n--){
            int power;
            int win_count;
            std::cin >> power;
            if (win_count == k){
                break;
            }
            if (max_power > power){
                win_count += 1;
            } else{
                max_power = power;
                win_count = 1;
            }
        }
        std::cout << max_power;
    }
    return 0;
}