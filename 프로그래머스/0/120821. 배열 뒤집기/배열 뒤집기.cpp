#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    int S = num_list.size();
    for (int i = 0; i < S; i++) {
        answer.push_back(num_list[S-1-i]);
    }
    return answer;
}