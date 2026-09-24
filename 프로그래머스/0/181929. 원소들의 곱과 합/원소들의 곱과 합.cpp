#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    int m=1;
    int p=0;
    for (int i : num_list) {
        m *= i;
        p += i;
    }
    if (m<p*p) {
        answer = 1;
    } else {answer = 0;}
    return answer;
}