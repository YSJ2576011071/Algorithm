#include <string>
#include <vector>

using namespace std;

int solution(vector<int> common) {
    int answer = 0;
    int r = 0;
    int diff1 = common[1] - common[0];
    int diff2 = common[2] - common[1];
    // 등차
    if ( diff1 == diff2 ) {
        answer = common.back() + diff2;
    }
    // 등비
    else {
        answer = common.back()*(diff2/diff1);
    }
    return answer;
}