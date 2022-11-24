#include <iostream>
#include <string>
#include <map>
    
int main()
{
    int t;
    std::string s;
    std::cin>>t;
    while(t--){
        std::cin>>s;
        int n=s.length();
        std::map <char,int> mapp;
        for(int i=0;i<n;i++){
            mapp[s[i]]++;
        }
        if(s[0]=='0') std::cout<<1<<std::endl;
        else if(mapp['?']==n) std::cout<<n<<std::endl;
        else if(sizeof(s)==1)std::cout<<1<<std::endl;
        else{
            if(mapp['0']==0){
                int i=0;
                int nb1=0;
                while(i<n){
                    if(s[i]=='1')nb1++;
                    if(nb1==mapp['1']){
                        std::cout<<n-i<<std::endl;
                        break;
                    }
                    i++;
                }
            }
            else if(mapp['1']==0){
                int nb2=0;
                int j=0;
                while(j<n){
                    if(s[j]=='0')nb2++;
                    if(nb2==1){
                        std::cout<<j+1<<std::endl;
                        break;
                    }
                    j++;
                }
            }
            else{
            int thief=0;
            int zero=0;
            int one=0;
            int k=0;
            while(k<n){
                if (s[k]=='1'){
                    one++;
                }
                if(one==mapp['1']){
                    thief=1;
                    one=-1;
                    }
                if(s[k]=='0'){
                    zero++;
                }
                if(zero==1){
                    std::cout<<thief<<std::endl;
                    break;
                    }
                if(one==-1)thief++;
                k++;
            }
        }
        }
    }
    return 0;
}