#include <bits/stdc++.h>
using namespace std;

int romanToInt(string s) {
        int sum=0;
        for(int i=0;i<s.size();++i){
            if(s[i]=='M'){
                if(i>0 &&s[i-1]=='C'){
                    sum+=900-100;
                }
                else sum+=1000;
            }
            else if(s[i]=='D'){
                if(i>0 && s[i-1]=='C'){
                    sum+=400-100;
                }else sum+=500;
            }
            else if(s[i]=='C'){
                if(i>0 && s[i-1]=='X') {
                    sum+=90-10;
                }
                else sum+=100;
            }
            else if(s[i]=='L'){
                if(i>0 && s[i-1]=='X') {
                    sum+=40-10;
                }
                else sum+=50;
            }
            else if(s[i]=='X'){
                if(i>0 && s[i-1]=='I'){
                    sum+=9-1;
                } 
                else sum+=10;
            }
            else if(s[i]=='V'){
                if(i>0 && s[i-1]=='I'){
                    sum+=4-1;
                }else sum+=5;
                
            }
            else if(s[i]=='I'){
                sum+=1;
            }
            else{
                continue;
            }

        }
        return sum;
    }

int main(){
    string s;cin>>s;
    cout<<romanToInt(s);
}