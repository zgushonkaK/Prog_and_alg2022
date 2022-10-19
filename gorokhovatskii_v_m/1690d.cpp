#include<iostream>
#include<string>

int main(){
    int t;
    std::cin >> t;
    for (int i = 0; i < t; i += 1){
        int n;
        int k;
        int counta(0);
        int mincount(1000000000);
        std::string s;
        std::cin >> n >> k;
        std::cin >> s;
        for (int j = 0; j < n; j += k){
        	if (j+k > k){
            	break;
            }
            for(int l = 0; l < k; l += 1){
                if (s[j+l] == 'W'){
                    counta += 1;
                }
            }
            if (counta < mincount){
                mincount = counta;
            }
            counta = 0;
        }
        std::cout << mincount << std::endl;
    }
}