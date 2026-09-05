#include <string>
#include <vector>

using namespace std;

int solution(int n, int k) {
    int b = 0;
    int answer = 0;
    b = n/10;
    answer = n*12000 + k*2000 - b*2000;
    return answer;
}