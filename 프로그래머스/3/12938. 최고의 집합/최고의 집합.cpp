#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int s) {
    vector<int> answer;
    int a = s/n;
    int b = s%n;
    if (n > s) {
        answer.push_back(-1);
        return answer;
    }
    for (int i = 0 ; i < n ; i++) {
        answer.push_back(a);
    }
    if (b != 0) {
        for (int j = n-1 ; b>0 ; j--) {
            answer[j] += 1;
            b -= 1;
        }
    }
    return answer;
}