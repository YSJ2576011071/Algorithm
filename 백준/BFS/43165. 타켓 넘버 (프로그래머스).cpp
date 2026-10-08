#include <bits/stdc++.h>

using namespace std;
int answer = 0;

void BFS(vector<int> num, int tgt){
    queue<pair<int,int>> Q;
    Q.push({0,num[0]});
    Q.push({0,-num[0]});
    while (!Q.empty()) {
        int idx = Q.front().first; // pair는 첫번째 요소에 first로 접근함
        int res = Q.front().second; // pair는 두번째 요소에 second로 접근함

        Q.pop(); //Q.front()값을 저장하고 pop
        if (idx == num.size()-1 && res == tgt) { //Q.front()의 값이 조건에 만족하는지 검증
            answer += 1;
        } else if (idx < num.size()-1 ) { //Q.front()가 조건에 미달하면 다시 Q에 푸시
            Q.push({idx+1,res + num[idx+1]});
            Q.push({idx+1,res - num[idx+1]});
        }
    }
}

int solution(vector<int> numbers, int target) {
    BFS(numbers,target);
    return answer;
}
