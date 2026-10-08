#include <string>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    int p1[5] = {1, 2, 3, 4, 5};
    int p2[8] = {2, 1, 2, 3, 2, 4, 2, 5};
    int p3[10] = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
    int a1 = 0; int a2 = 0; int a3 = 0;
    
    for (int i = 0 ; i < answers.size() ; i++) {
        if (p1[i%5] == answers[i]) {
            a1++;
        } if (p2[i%8] == answers[i]) {
            a2++;
        } if (p3[i%10] == answers[i]) {
            a3++;
        }
    }
    
    vector<pair<int,int>> P;
    P.push_back({a1,1});
    P.push_back({a2,2});
    P.push_back({a3,3});
    
    // [수정 1] max의 타입을 pair<int,int>로 바꾸고, P[0]의 번호(1번)를 미리 answer에 넣어둠
    pair<int,int> max = P[0];
    answer.push_back(P[0].second);
    
    for (int i = 1 ; i < P.size() ; i++) {
        // [수정 2] pair끼리 비교하면 first(점수)를 우선 비교합니다.
        if (max.first < P[i].first) {
            max = P[i];
            answer = {};
            answer.push_back(P[i].second);
        } else if (max.first == P[i].first) {
            answer.push_back(P[i].second);
        }
    }
    
    return answer;
}