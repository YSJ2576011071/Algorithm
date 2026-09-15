#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 45;
    vector<int> arr = {1,2,3,4,5,6,7,8,9};
    for (int i = 0 ; i < numbers.size() ; i++) {
        for (int j = 0 ; j < arr.size() ; j++) {
            if (numbers[i] == arr[j]) {
                answer -= numbers[i];
            }
        }
    }
    return answer;
}