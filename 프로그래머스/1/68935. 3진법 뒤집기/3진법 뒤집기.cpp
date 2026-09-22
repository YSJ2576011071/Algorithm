#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
    vector<int> v;
    int answer = 0;
    
    // n이 0이 될 때까지 3으로 나누며 나머지를 저장합니다.
    while (n > 0) {
        v.push_back(n % 3); // 나머지를 배열에 넣음
        n /= 3;             // n을 3으로 나눔
    }
    
    // n = 45일 때, v에는 [0, 0, 2, 1] 이 들어갑니다.
    
    int p = 0; // 3의 거듭제곱 지수 (0, 1, 2, 3...)
    
    // 맨 뒤(v[3])부터 앞으로 오면서 3^0, 3^1, 3^2... 순서대로 곱해줍니다.
    for (int i = v.size() - 1; i >= 0; i--) {
        answer += v[i] * (int)pow(3, p);
        p++; // 지수를 1씩 증가
    }
    
    return answer;
}