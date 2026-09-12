#include <string>
#include <vector>

using namespace std;

double solution(vector<int> arr) {
    double answer = 0;
    int s = arr.size();
    for(int i=0; i < s ; i++) {
        answer += arr[i];
    }
    answer /= s;
    return answer;
}