#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    string n;
    string List1[10] = {"zero","one","two","three","four",
            "five","six","seven","eight","nine"};
    string List2[10] = {"0","1","2","3","4","5","6","7","8","9"};
    for (int i = 0 ; i < s.length() ; i++) {
        n += s[i];
        for (int j = 0; j < 10 ; j++) {
            if (n == List1[j]) {
                answer = answer * 10 + j;
                n = "";
            } else if (n == List2[j]) {
                answer = answer * 10 + j;
                n = "";
            }
        }
    }
    return answer;
}