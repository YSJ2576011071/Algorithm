#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    int answer = 0;
    while (num != 1) {
        if (answer >= 400) {
            answer = -1;
            break;
        } else if (num % 2 == 0) {
            num /= 2;
            answer += 1;
        } else {
            num = num*3 + 1;
            answer += 1;
        }
    }
    return answer;
}