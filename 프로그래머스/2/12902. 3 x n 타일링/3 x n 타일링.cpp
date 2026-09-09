#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    long long MOD = 1000000007; //long long형은 개큰 숫자 넣을 때 사용하는 자료형
    if (n > 1) {
        if (n%2 == 1) {
            answer = 0;
            return answer;
        } else {
            vector<long long> dp(n + 1, 0); //배열 생성할 때 n+1만큼 생성하고 0으로 채워라
            dp[0] = 1;
            dp[2] = 3;
            for (int i = 4; i <= n; i += 2) {
                dp[i] = (dp[i - 2] * 4 - dp[i - 4] + MOD) % MOD; //음수로 나올 수 있어서 MOD더하고 나눔
            }
            answer = dp[n];
        }
    } else {
        answer = 0;
    }
    return answer;
}
