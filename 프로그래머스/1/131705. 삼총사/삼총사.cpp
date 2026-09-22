#include <string>
#include <vector>

using namespace std;

int solution(vector<int> number) {
    int answer = 0;
    for (int i = 0 ; i < number.size() ; i++) {
        for (int j = 0 ; j != i && j < number.size() ; j++) {
            for (int k = 0 ; k != j && k != i && k < number.size() ; k++) {
                if (number[i] + number[j] + number[k] == 0) {
                    answer++;
                }
            }
        }
    }
    return answer;
}