#include <string>
#include <vector>

using namespace std;

int solution(string message) {
    int answer = 0;
    for (int i = 0 ; i < message.size() ; i++) {
        answer += 2;
    }
    return answer;
}