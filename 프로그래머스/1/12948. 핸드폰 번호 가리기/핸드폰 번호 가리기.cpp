#include <string>
#include <vector>

using namespace std;

string solution(string phone_number) {
    string answer = "";
    int a = 0;
    int n = phone_number.length();
    for (int i = 0 ; i < n-4 ; i++) {
        answer += "*";
        a += 1;
    }
    for (a; a < n ; a++) {
        answer += phone_number[a];
    }
    return answer;
}