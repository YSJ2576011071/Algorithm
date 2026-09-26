#include <string>
#include <vector>
#include <cctype>

using namespace std;

vector<string> solution(vector<string> strArr) {
    vector<string> answer;
    for (int i = 0 ; i < strArr.size() ; i++) {
        for (int j = 0 ; j < strArr[i].size() ; j++) {
            if (i%2 == 1) {
                strArr[i][j] = toupper(strArr[i][j]);
            } else {
                strArr[i][j] = tolower(strArr[i][j]);
            }
        }
    }
    answer = strArr;
    return answer;
}