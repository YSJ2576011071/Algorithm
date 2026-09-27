#include <string>
#include <vector>
#include <algorithm>
#include <cctype>

using namespace std;

string solution(string myString) {
    string answer = "";
    for (char c : myString) {
        c = tolower(c);
        answer += c;
    }
    return answer;
}