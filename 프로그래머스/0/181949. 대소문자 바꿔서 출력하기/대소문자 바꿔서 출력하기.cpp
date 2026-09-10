#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main(void) {
    string str;
    string answer;
    cin >> str;
    for (int i = 0 ; i < str.length(); i++) {
        if (isupper(str[i])) {
            answer += tolower(str[i]);
        } else {
            answer += toupper(str[i]);
        }
    }
    cout << answer;
    return 0;
}