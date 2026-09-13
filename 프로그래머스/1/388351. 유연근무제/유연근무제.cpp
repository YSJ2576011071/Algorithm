#include <string>
#include <vector>

using namespace std;

int solution(vector<int> schedules, vector<vector<int>> timelogs, int startday) {
    int answer = 0;
    int current_day;
    vector<int> score(schedules.size(), 0);;
    for (int i = 0 ; i < schedules.size() ; i++) {
        int limit = schedules[i] + 10;
        if (limit % 100 >= 60) {
            limit += 40;
        }
        for (int j = 0 ; j < timelogs[i].size() ; j++) {
            current_day = (startday - 1 + j) % 7 + 1;
            if (current_day == 6 || current_day == 7) {
                score[i] += 1;
            } else if (current_day != 6 && current_day != 7) {
                if (limit >= timelogs[i][j]) {
                    score[i] += 1;
                }
            }
        } if ( score[i] == 7 ) {
            answer += 1;
        }
    }
    return answer;
}