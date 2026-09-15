#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    
    // 1. divisor로 나누어 떨어지는 값만 수집
    for (int num : arr) {
        if (num % divisor == 0) {
            answer.push_back(num);
        }
    }
    
    // 2. 나누어 떨어지는 요소가 하나도 없다면 -1 반환
    if (answer.empty()) {
        return {-1};
    }
    
    // 3. 오름차순 정렬
    sort(answer.begin(), answer.end());
    
    return answer;
}