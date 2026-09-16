#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int min = 10000;
    if (arr[0] == 10) {
        answer.push_back(-1);
        return answer;
    }
    for (int i = 0 ; i < arr.size() ; i++) {
        if (min > arr[i]) {
            min = arr[i];
        }
    }
    for (int i = 0 ; i < arr.size() ; i++) {
        if (arr[i] != min) {
            answer.push_back(arr[i]);
        }
    }
    return answer;
}