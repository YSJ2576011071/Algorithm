#include <string>
#include <vector>

using namespace std;

vector<int> solution(int money) {
    vector<int> answer;
    if (1000000 >= money >0) {
        answer.push_back(money/5500);
        answer.push_back(money%5500);
    }
    return answer;
}