#include <string>
#include <vector>
#include <queue>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    queue<int> Q1;
    queue<int> Q2;
    int d = 0;
    for (int i = 0 ; i< speeds.size() ; i++) {
        Q1.push(progresses[i]);
        Q2.push(speeds[i]);
    }
    while (Q1.size() != 0) {
        d++;
        if (Q1.front() + d*Q2.front() >= 100) {
            int r = 0;
            while ((Q1.size() != 0) && (Q1.front() + d*Q2.front() >= 100)) {
                r++;
                Q1.pop();
                Q2.pop();
            }
            answer.push_back(r);
        }
    }
    return answer;
}