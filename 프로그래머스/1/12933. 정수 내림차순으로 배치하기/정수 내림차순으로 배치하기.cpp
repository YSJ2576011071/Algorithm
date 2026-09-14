#include <vector>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    vector<int> A;

    // 1. 각 자릿수를 추출하여 배열에 저장
    while (n > 0) {
        A.push_back(n % 10);
        n /= 10;
    }

    // 2. 선택 정렬(Selection Sort)을 이용해 내림차순 정렬
    for (int i = 0; i < A.size(); i++) {
        int max_idx = i;
        for (int j = i + 1; j < A.size(); j++) {
            if (A[j] > A[max_idx]) {
                max_idx = j;
            }
        }
        // 가장 큰 값과 현재 위치(i)의 값 스왑
        int temp = A[i];
        A[i] = A[max_idx];
        A[max_idx] = temp;
    }

    // 3. 정렬된 배열을 다시 하나의 숫자로 합성
    for (int i = 0; i < A.size(); i++) {
        answer = answer * 10 + A[i];
    }

    return answer;
}