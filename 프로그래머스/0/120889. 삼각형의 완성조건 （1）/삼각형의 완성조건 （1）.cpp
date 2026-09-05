#include <string>
#include <vector>

using namespace std;

int solution(vector<int> sides) {
    int answer = 1;
    int Add1 = sides[0] + sides[1];
    int Add2 = sides[1] + sides[2];
    int Add3 = sides[0] + sides[2];
    if (sides[0] >= Add2) {
        answer = 2;
    } else if (sides[1] >= Add3) {
        answer = 2;
    } else if (sides[2] >= Add1) {
        answer = 2;
    }
    return answer;
}