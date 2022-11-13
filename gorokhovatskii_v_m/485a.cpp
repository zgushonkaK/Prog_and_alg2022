#include<iostream>
#include<cmath>
 
int main(){
    int a;
    int m;
    bool flag = false;
    std::cin >> a >> m;
    double days;
    days = log2(m);
    for (int i = 0; i <= days; i += 1){
        int s = a*pow(2,i);
        if (s % m == 0){
            flag = true;
        }
    }
    if (flag){
        std::cout << "Yes";
    } else{
        std::cout << "No";
    }
}