#include <string>
#include <vector>
#include <cctype>

using namespace std;

string solution(string s) {
    string answer = "";
    string upp = "";
    string low = "";
    
    // 1. low, upp 분류 (기존 코드 유지)
    for (int i = 0 ; i < s.length() ; i++) {
        if (isupper(s[i])) {
            upp += s[i];
        } else {
            low += s[i];
        }
    }
    
    // 2. upper 문자열 내림차순 정렬 (선택 정렬)
    for (int j = 0 ; j < upp.length() ; j++) {
        for (int index = j + 1 ; index < upp.length() ; index++) {
            // upp 안의 문자를 비교하여 더 큰 값을 앞으로 보냄
            if (upp[j] < upp[index]) {
                char temp = upp[j];
                upp[j] = upp[index];
                upp[index] = temp;
            }
        }
    }
    
    // 3. lower 문자열 내림차순 정렬 (선택 정렬)
    for (int j = 0 ; j < low.length() ; j++) {
        for (int index = j + 1 ; index < low.length() ; index++) {
            // low 안의 문자를 비교하여 더 큰 값을 앞으로 보냄
            if (low[j] < low[index]) {
                char temp = low[j];
                low[j] = low[index];
                low[index] = temp;
            }
        }
    }
    
    // 4. 합치기 (기존 코드 유지)
    answer = low + upp;
    return answer;
}