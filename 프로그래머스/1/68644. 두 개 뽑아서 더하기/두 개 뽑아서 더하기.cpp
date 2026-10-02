#include <string>
#include <vector>
#include <algorithm>


using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    int a = 0;
    int c = 0;
    for (int i = 0 ; i < numbers.size() ; i++) {
        for (int j = 0 ; j < numbers.size() ; j++) {
            if (i != j) {
                c = 0;
                a = numbers[i] + numbers[j];
                for (int k = 0 ; k < answer.size() ; k++) {
                    if (a == answer[k]) {
                        c = 1;
                        break;
                    }
                }
                if (c != 1) {
                    answer.push_back(a);
                }
            }
        }
    }
    sort(answer.begin(),answer.end());
    return answer;
}