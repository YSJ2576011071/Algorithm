#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    long long MOD = 1000000007;
    if (n > 1) {
        if (n%2 == 1) {
            answer = 0;
            return answer;
        } else {
            vector<long long> dp(n + 1, 0);
            dp[0] = 1;
            dp[2] = 3;
            for (int i = 4; i <= n; i += 2) {
                dp[i] = (dp[i - 2] * 4 - dp[i - 4] + MOD) % MOD;
            }
            answer = dp[n];
        }
    } else {
        answer = 0;
    }
    return answer;
}