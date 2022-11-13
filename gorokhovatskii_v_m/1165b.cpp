#include<iostream>
#include<algorithm>
 
int main(){
    int n;
    std::cin >> n;
    std::vector<int> task_count(n);
    for (int i = 0; i < n; i += 1){
        std::cin >> task_count[i];
    }
    std::sort(task_count.begin(), task_count.end());
    int ans = 1;
    for (int i = 0; i < n; i+=1){
        if (task_count[i] >= ans){
            ans += 1;
        }
    }
    std::cout << ans - 1 << std::endl;
    return 0;
}