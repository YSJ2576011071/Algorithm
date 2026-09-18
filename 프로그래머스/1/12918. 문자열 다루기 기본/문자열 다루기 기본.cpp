#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
    bool answer = true;
    for (int i = 0 ; i < s.length() ; i++) {
        char a = s[i];
        if (57 < a) {
            answer = false;
            return answer;
        } if (s.length() != 4 && s.length() != 6) {
            answer = false;
            return answer;
        }
    }
    return answer;
}