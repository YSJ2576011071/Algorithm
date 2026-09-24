#include <string>
#include <vector>
#include <cctype>

using namespace std;

string solution(string s) {
    string answer = "";
    vector<string> S;
    string a;
    for (char c : s) {
        if (c != ' ') { a += c; }
        else if (c == ' ') {
            S.push_back(a);
            a = "";
        }
    } S.push_back(a);
    int c = 0;
    for (string l : S) {
        c++;
        for (int i = 0 ; i < l.length() ; i++) {
            if (isalpha(l[i])) {
                if (i == 0) { l[i] = toupper(l[i]); }
                else { l[i] = tolower(l[i]); }
            }
        }
        if (c != S.size()) { answer += l + " "; }
        else { answer += l; }
    }
    return answer;
}