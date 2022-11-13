#include<iostream>
 
int main(){
    int n;
    int ans = 0;
    std::cin >> n;
    while(n){
        if (n&1){
            ans += 1;
        }
        n >>= 1;
    }
    std::cout << ans;
    return 0;
}