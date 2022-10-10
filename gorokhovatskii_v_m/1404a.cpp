#include <iostream> 
#include <string>
 
int main() { 
    int a, n, t, k; 
    std::string s;
    
    std::cin >> t;
    
    for (int i = 0; i < t; i += 1) { 
        
        std::cin >> n >> k >> s;
        int flag = false;
                
        for (int o=0; o<k; o += 1) {
            
            for (int e=k+o; e<n; e+=k) {
                
                if (s[o] == '?') {
                    if (s[e] != '?') {
                        s[o] = s[e];
                        }
                    }
                else if (s[e] == '?') {
                    if (s[o] != '?') {
                        s[e] = s[o];
                        }
                    } 
                else if (s[e] != s[o]) { 
                    flag = true;
                    break;
                    }}
        }   
        
        int n0 = 0, n1 = 0;
            
        for (int j =0; j<k; j += 1) { 
            
            if (s[j] == '1') { 
                n1++;
                }
            else if (s[j] =='0') {
                n0++;
                }
            }   
        
        if ( (n0 > k/2) || (n1 > k/2) ) {
            flag = true;
            }
                
        if (flag) {
            std::cout << "NO"; 
            std::cout << std::endl;
            }
        else {
            std::cout << "YES";
            std::cout << std::endl;
            }
        }
        
return 0;
 
}