#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

int solution(int k, vector<int> tangerine) {
    int answer = 0;
    // 해시테이블
    unordered_map<int, int> counts;

    // 1. 크기별 귤 개수 카운트
    for (int size : tangerine) {
        counts[size]++;
    }

    // 2. 개수(빈도)만 벡터로 추출
    vector<int> freq;
    for (auto& pair : counts) {
        freq.push_back(pair.second);
    }

    // 3. 내림차순 정렬
    sort(freq.rbegin(), freq.rend());

    // 4. 개수가 많은 귤부터 담기
    int total = 0;
    for (int count : freq) {
        total += count;
        answer++;
        if (total >= k) {
            break;
        }
    }

    return answer;
}