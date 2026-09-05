#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    int a = 0;
    string num = "aeiou";
    for (int i = 0; i < my_string.length(); i++) {
        a = 0;
        for (int j = 0; j < num.length(); j++) {
            if (my_string[i] != num[j]) {
                a += 1;
            }
        }
        if (a == 5) {
            answer += my_string[i];
        }
    }
    return answer;
}