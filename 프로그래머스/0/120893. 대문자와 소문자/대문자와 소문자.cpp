#include <string>
#include <vector>
#include <cctype>

using namespace std;

string solution(string my_string) {
    string answer = "";
    for (int i = 0; i < my_string.size() ; i++) {
        if (isupper(my_string[i])) {
            my_string[i] = tolower(my_string[i]);
        }
        else {
            my_string[i] = toupper(my_string[i]);
        }
        answer += my_string[i];
    }
    return answer;
}