#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> lists;
    vector<int> result;
    for (int i = 0; i < score.size(); i++) {
        lists.push_back(score[i]);
        if (lists.size() > k) {
            lists.erase(min_element(lists.begin(), lists.end()));
        }
        result.push_back(*min_element(lists.begin(), lists.end()));
    }

    return result;
}