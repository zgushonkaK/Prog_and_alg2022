#include<iostream>
#include<map>

int main(){
    std::map<int, int> count_stolov;
    int n;
    int max_num = -1;
    int ans;
    std::cin >> n;
    int min_num = (n+1);
    for (int i = 1; i <= n; i += 1){
        int curr_stolov;
        std::cin >> curr_stolov;
        count_stolov[curr_stolov] = i;
        if (curr_stolov > max_num){
            max_num = curr_stolov;
        }
    }
    for (int k = 0; k <= max_num; k+=1){
        if (count_stolov[k] < min_num && count_stolov[k] != 0){
            min_num = count_stolov[k];
            ans = k;
        }
    }
    std::cout << ans;
}

