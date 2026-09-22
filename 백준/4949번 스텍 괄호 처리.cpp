#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string a;
    getline(cin, a);

    stack<char> s;
    bool isValid = true;

    for (char c : a) {
        // 여는 괄호면 스택에 넣음
        if (c == '(' || c == '{' || c == '[') {
            s.push(c);
        } 
        // 닫는 괄호일 때
        else if (c == ')' || c == '}' || c == ']') {
            // 여는 괄호가 없는데 닫는 괄호가 나온 경우
            if (s.empty()) {
                isValid = false;
                break;
            }

            // 스택의 맨 위(가장 최근 여는 괄호)와 짝이 맞는지 확인
            char top = s.top();
            if ((c == ')' && top == '(') ||
                (c == '}' && top == '{') ||
                (c == ']' && top == '[')) {
                s.pop(); // 짝이 맞으면 스택에서 제거
            } else {
                isValid = false; // 짝이 맞지 않으면 실패
                break;
            }
        }
    }

    // 끝까지 돌았을 때 스택에 남아있는 여는 괄호가 없어야 성공
    if (isValid && s.empty()) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }

    return 0;
}