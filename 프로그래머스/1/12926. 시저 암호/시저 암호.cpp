#include <string>
#include <vector>
#include <cctype>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    vector<char> a;
    for (char c : s) {
        a.push_back(c);
    }
    for (int i = 0 ; i < a.size() ; i++) {
        if (a[i] == ' ') {
            answer += " ";
        } else if (a[i] >= 'A' && a[i] <= 'Z') {
            a[i] = (a[i] - 'A' + n) % 26 + 'A';
            answer += a[i];
        } else {
            a[i] = (a[i] - 'a' + n) % 26 + 'a';
            answer += a[i];
        }
    }
    return answer;
}