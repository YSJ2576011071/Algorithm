#include <string>
#include <vector>
#include <cctype> // toupper, tolower 사용

using namespace std;

string solution(string s) {
    int idx = 0; // 단어 내부에서의 인덱스
    
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            // 공백을 만나면 단어 인덱스를 0으로 리셋
            idx = 0;
        } else {
            // 짝수 번째 글자는 대문자, 홀수 번째 글자는 소문자
            if (idx % 2 == 0) {
                s[i] = toupper(s[i]);
            } else {
                s[i] = tolower(s[i]);
            }
            idx++; // 단어 내부 인덱스 증가
        }
    }
    
    return s;
}