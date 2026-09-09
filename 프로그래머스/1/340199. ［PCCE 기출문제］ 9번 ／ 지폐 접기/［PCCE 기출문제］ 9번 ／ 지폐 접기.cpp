#include <string>
#include <vector>

using namespace std;

int solution(vector<int> wallet, vector<int> bill) {
    int answer = 0;
    while (1>0) {
        if ((wallet[0] >= bill[0]) && (wallet[1] >= bill[1]) ) {
            return answer;
        } else if ((wallet[1] >= bill[0]) && (wallet[0] >= bill[1]) ) {
            return answer;
        } else if (bill[0] > bill[1] ) {
            bill[0] /= 2;
            answer += 1;
        } else {
            bill[1] /= 2;
            answer += 1;
        }
    }
    return answer;
}