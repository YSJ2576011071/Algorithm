#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    for (int i = 1 ; i <= n ; i++) {
        int a = 0;
        for (int j = 0 ; j < n ; j++) {
            a += i+j;
            if (a == n) {
                answer++;
            }if (a > n) {
                break;
            }
        }
    }
    return answer;
}