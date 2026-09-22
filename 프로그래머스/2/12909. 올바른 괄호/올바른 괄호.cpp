#include <string>
#include <iostream>
#include <stack>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    stack<char> stack;

    for (char c : s) {
        if (c == '(') {
            stack.push(c);
        } else if (c == ')') {
            if (stack.empty()) {
                answer = false;
            } else if (stack.top() == '(') {
                stack.pop();
            } else {
                answer = false;
            }
        }
    }
    if (stack.size() != 0) {
        answer = false;
    }

    return answer;
}