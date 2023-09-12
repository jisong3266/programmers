#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    vector<int> answer(photo.size(),0);
    for(int i=0;i<photo.size();i++){
        for(int k=0;k<name.size();k++){
            for(int j=0;j<photo[i].size();j++){
                if(photo[i][j] == name[k]){
                answer[i] += yearning[k];
            }
            }
    }
    }
    return answer;
}