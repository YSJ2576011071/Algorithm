#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int> num;
    while (n > 0) {
        answer += n%10;
        n /= 10;
    }
    return answer;
}