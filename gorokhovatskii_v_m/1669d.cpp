#include <iostream>
#include <string>

int main(){
    int t;
    std::cin >> t;
    while(t--){
        int n;
        std::cin>>n;
        int ans = 0;
        std::string s;
        std::cin>>s;
        for(int i=0;i<n;i++)
        {
            if(s[i]!='W')
            {
                int b=0,r=0;
                while(i<n && s[i]!='W')
                {
                    if(s[i]=='R')r++;
                    else b++;
                    i++;
                }
                if(b==0 || r==0)
                {
                    ans=1;
                    break;
                }
            }
        }
        if(ans==0) std::cout<<"YES"<<std::endl;
        else std::cout<<"NO"<<std::endl;
    }
    return 0;
}