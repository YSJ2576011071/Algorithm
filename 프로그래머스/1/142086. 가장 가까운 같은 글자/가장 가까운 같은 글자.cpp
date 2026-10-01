#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    vector<char> A;
    for (char c : s) {A.push_back(c);}
    for (int i = 0 ; i < A.size() ; i++) {
        int index = -1;
        for (int j = 0 ; j < i ; j++) {
            if (A[i] == A[j]) {
                index = i-j;
            }
        }
        answer.push_back(index);
    }
    return answer;
}