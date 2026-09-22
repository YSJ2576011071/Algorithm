#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    int temp = 0;
    int maxX = 0;
    int maxY = 0;
    for (int i = 0 ; i < sizes.size() ; i++) {
        if (sizes[i][0] < sizes[i][1]) {
            temp = sizes[i][1];
            sizes[i][1] = sizes[i][0];
            sizes[i][0] = temp;
        }
    }
    for (int i = 0 ; i < sizes.size() ; i++) {
        if (maxX < sizes[i][0]) {
            maxX = sizes[i][0];
        } if (maxY < sizes[i][1]) {
            maxY = sizes[i][1];
        }
    }
    answer = maxX * maxY;
    return answer;
}