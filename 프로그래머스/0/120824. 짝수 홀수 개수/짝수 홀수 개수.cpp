#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    int a = 0;
    int b = 0;
    vector<int> answer;
    for (int i = 0 ; i < num_list.size() ; i++) {
        if (num_list[i]%2 == 0) {
            a += 1;
        }
    }
    b = num_list.size() - a;
    answer.push_back(a);
    answer.push_back(b);
    return answer;
}