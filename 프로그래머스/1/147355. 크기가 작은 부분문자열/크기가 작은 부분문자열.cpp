#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    int p_len = p.length();
    long long p_num = stoll(p); // p를 미리 long long 숫자로 변환

    // t에서 p_len 크기만큼 자를 수 있는 모든 위치 반복
    for (int i = 0; i <= (int)t.length() - p_len; i++) {
        // p의 길이(p_len)만큼 부분 문자열을 추출
        string sub = t.substr(i, p_len);
        
        // 추출한 문자열을 long long으로 변환 후 비교
        if (stoll(sub) <= p_num) {
            answer++;
        }
    }
    
    return answer;
}