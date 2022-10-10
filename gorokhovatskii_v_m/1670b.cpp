#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<set>
 
int main(){
    int t;
    std::ios::sync_with_stdio(false);
    std::cin >> t;
    std::string s;
    s.reserve(100000);
    for (int i = 0; i < t; i += 1){
        int n, k;
        std::cin >> n;
        std::cin >> s;
        std::cin >> k;
        std::set<int> q;
        for (int j = 0; j < k; j+=1){
            char l;
            std::cin >> l;
            q.insert(l);
        }
        int oldindex(0),ma(0);
        for (int h = 0; h < n; h += 1){
            if (q.find(s[h]) != q.end()){
                if (h-oldindex > ma){
                    ma = h - oldindex;
                }
                oldindex = h;
            }
        }
        std::cout << ma << std::endl;
 
    }
    return 0;
}