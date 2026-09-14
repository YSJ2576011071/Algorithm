#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    int p = 0;
    int y = 0;
    bool answer = true;
    for (int i = 0 ; i < s.length() ; i++) {
        if (s[i] == 'p' || s[i] == 'P' ){
            p += 1;
        } else if (s[i] == 'y' || s[i] == 'Y' ) {
            y += 1;
        }
    }
    if (p == y) {
        answer = true;
    } else {
        answer = false;
    }

    return answer;
}