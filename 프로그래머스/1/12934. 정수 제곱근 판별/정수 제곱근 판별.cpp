#include <string>
#include <vector>

using namespace std;

long long solution(long long n) {
    long long answer = -1;
    for (int i = 0 ; i <= n ; i++) {
        if (i*i == n) {
            answer = (i+1)*(i+1);
        } else if (i*i > n) {
            return answer;
        }
    }
    return answer;
}