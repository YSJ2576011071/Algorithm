#include <iostream>
#include <string>
using namespace std;

int solution(string s)
{
    string stack = "";
    
    for (char ch : s) {
        // 스택이 비어있지 않고, 맨 뒤의 문자가 현재 문자와 같으면 짝이 맞으므로 제거
        if (!stack.empty() && stack.back() == ch) {
            stack.pop_back();
        } 
        // 짝이 맞지 않으면 스택에 추가
        else {
            stack.push_back(ch);
        }
    }
    
    // 스택이 완전히 비어있으면 모든 짝이 제거된 것이므로 1, 남아있으면 0 반환
    return stack.empty() ? 1 : 0;
}