#include <bits/stdc++.h>

using namespace std;
int answer = 0;

void BFS(vector<int> num, int tgt){
    queue<pair<int,int>> Q;
    Q.push({0,num[0]});
    Q.push({0,-num[0]});
    while (!Q.empty()) {
        int idx = Q.front().first;
        int res = Q.front().second;
        Q.pop();
        if (idx == num.size()-1 && res == tgt) {
            answer += 1;
        } else if (idx < num.size()-1 ) {
            Q.push({idx+1,res + num[idx+1]});
            Q.push({idx+1,res - num[idx+1]});
        }
    }
}

int solution(vector<int> numbers, int target) {
    BFS(numbers,target);
    return answer;
}