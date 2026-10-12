#include <string>
#include <vector>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    int a1 = 0;
    int a2 = 0;
    
    for (int i = 0; i < goal.size(); i++) {
        // cards1의 현재 맨 앞 카드와 일치하는 경우
        if (a1 < cards1.size() && cards1[a1] == goal[i]) {
            a1++;
        } 
        // cards2의 현재 맨 앞 카드와 일치하는 경우
        else if (a2 < cards2.size() && cards2[a2] == goal[i]) {
            a2++;
        } 
        // 둘 다 일치하지 않으면 goal을 만들 수 없음
        else {
            return "No";
        }
    }
    
    return "Yes";
}