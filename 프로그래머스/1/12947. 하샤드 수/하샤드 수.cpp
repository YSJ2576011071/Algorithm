#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    int b = x;
    bool answer = true;
    int a;
    while(x != 0) {
        a += x%10;
        x /= 10;
    }
    if (b % a != 0) {
        answer = false;
    }
    return answer;
}