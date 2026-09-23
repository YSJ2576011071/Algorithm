#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> A, vector<int> B)
{
    int answer = 0;

    // A는 오름차순 정렬
    sort(A.begin(), A.end());
    
    // B는 내림차순 정렬 (greater<int>() 이용)
    sort(B.begin(), B.end(), greater<int>());

    // 작은 값 * 큰 값 끼리 곱해서 누적
    for (int i = 0; i < A.size(); i++) {
        answer += A[i] * B[i];
    }

    return answer;
}