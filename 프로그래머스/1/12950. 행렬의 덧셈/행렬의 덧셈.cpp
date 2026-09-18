#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    int row = arr1.size();
    int col = arr1[0].size();
    // 미리 얼만큼 벡터를 얼만큼 사용할 건지 명시해줘야 함
    vector<vector<int>> answer(row, vector<int>(col, 0));
    
    for (int i = 0 ; i < arr1.size() ; i++) {
        for (int j = 0 ; j < arr1[i].size(); j++) {
            answer[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    return answer;
}
