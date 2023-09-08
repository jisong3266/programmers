#include <iostream>
#include <vector>
#include <string>
#include <cctype>
#include <cstring>
#include <sstream>
#include <algorithm>
//옹알이
int solution(std::vector<std::string> babbling) {
  int answer = 0;
    vector<string> s = {"aya","ye","woo","ma"};
    vector<string> ss;
    vector<string> kk;
    for(int i=0; i< babbling.size(); i++){
      kk.push_back(string(babbling[i].size(), 'c')); 
      for(int j = 0; j<s.size();j++){
        string cc ="";
        int a = babbling[i].find(s[j]);
        int b = s[j].size();      
        if(a >= 0){
          for(int k=0;k<b;k++){
            cc += "c";
          }
          babbling[i].replace(a,b,cc);
        }
        }
        }
  for(int i =0;i<babbling.size();i++){
    if(kk[i] == babbling[i]){
        answer ++;
      }
  }
    cout << answer;
    return answer;
}