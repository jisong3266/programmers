#include <iostream>
#include <vector>
#include <string>
#include <cctype>
#include <cstring>
#include <sstream>
#include <algorithm>
#include <fstream>
//옹알이
int solution2(std::vector<std::string> babbling) {
  int answer = 0;
    vector<string> s = {"aya","ye","woo","ma"};
    vector<string> ss;
    vector<string> kk;
    int k = 0;
    while(k <30){
      for(int i=0; i< babbling.size(); i++){
      kk.push_back(string(babbling[i].size(), 'c')); 
      for(int j = 0; j<s.size();j++){
        string cc ="";
        int a = babbling[i].find(s[j]);
        int b = s[j].size();      
        if(a >= 0){
          if(babbling[i].find(s[j],a+1) == a+b){
            break;
          }
          for(int k=0;k<b;k++){
            cc += "c";
          }
          babbling[i].replace(a,b,cc);
        }
        }
        }
       k++;
    }
  for(int i =0;i<babbling.size();i++){
   // cout << kk[i]  << "DSFd \n"<< babbling[i] << endl;
    if(kk[i] == babbling[i]){
        answer ++;
      }
  }
    cout << answer;
    return answer;
}