#include <string>
#include <vector>

using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;
    int A;
    while (n != 0) {
        A = n%10;
        n = n/10;
        answer.push_back(A);
    }
    return answer;
}