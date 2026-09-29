#include <vector>
#include <cmath>

using namespace std;

vector<int> solution(int brown, int yellow) {
    int total = brown + yellow;
    
    // 세로 길이 h는 최소 3부터 전체 격자 수의 제곱근까지 탐색
    for (int h = 3; h <= sqrt(total); ++h) {
        if (total % h == 0) {
            int w = total / h;
            
            // 중앙 노란색 격자 수 조건 검증
            if ((w - 2) * (h - 2) == yellow) {
                return {w, h};
            }
        }
    }
    
    return {};
}