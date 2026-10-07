#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    vector<int> a;
    for (int i = 0 ; i < score.size() ; i++) {
        a.push_back(score[i]);
        sort(a.begin(),a.end());
        if (a.size() < k) {
            answer.push_back(a[0]);
        } else {
            answer.push_back(a[a.size()-k]);
        }
    }
    return answer;
}