#include<iostream>
#include<string>

std::string decod(std::string s, int n){
    if (s.size() % 2 == 0){
        std::string new_s;
        new_s += s[0];
        for (int i = 1; i < n; i += 1){
            if (i%2 == 1){
                new_s = new_s + s[i];
            } else{
                new_s = s[i] + new_s;
            }
        }
        return new_s;
    } else{
        std::string new_s;
        new_s += s[0];
        for (int i = 1; i < n; i += 1){
            if (i%2 == 1){
                new_s = s[i] + new_s;
            } else{
                new_s = new_s + s[i];
            }
        }
        return new_s;
    }
}

int main(){
    int n;
    std::string s;
    std::cin >> n >> s;
    std::cout << decod(s, n);
}