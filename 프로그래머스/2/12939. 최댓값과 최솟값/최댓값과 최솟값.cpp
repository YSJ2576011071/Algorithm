#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s) {
    vector<int> A;
    string a = "";

    // 1. 문자열을 수동으로 파싱
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != ' ') {
            a += s[i]; // 공백이 아니면 문자 누적 (음수 기호 '-' 포함)
        }
        
        // 공백을 만나거나 문자열의 마지막 문자에 도달했을 때
        if ((s[i] == ' ' || i == s.length() - 1) && !a.empty()) {
            A.push_back(stoi(a));
            a = ""; // 다음 숫자를 위해 초기화
        }
    }

    // 2. 최댓값 / 최솟값 찾기 (첫 번째 원소로 초기화)
    int min_val = A[0];
    int max_val = A[0];

    for (int i = 1; i < A.size(); i++) {
        if (A[i] < min_val) min_val = A[i];
        if (A[i] > max_val) max_val = A[i];
    }

    return to_string(min_val) + " " + to_string(max_val);
}