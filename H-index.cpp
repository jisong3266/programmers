#include <iostream>
#include <vector>
#include <string>
#include <cctype>
#include <cstring>
#include <sstream>
#include <algorithm>
using namespace std;

int solution() {
    int answer = 0;
    int box = 0;
    vector<int> citations = {3,0,6,1,5};
    vector<int> count;
    int b = citations.size();
    int a;
    sort(citations.begin(), citations.end());
    for(int i = 0; i<citations.size();i++){
        if(b >= citations[i]){
          a = b - citations[i];
        }
      else{
        a = citations[i]-b;
      }
      count.insert(count.begin()+i,a);
    }
    for(int i=0; i<citations.size();i++){
        if(count[i] <= citations[i]){
            if(count[i] > box){
                box = count[i];
            }
        }
    }
    return box;
}