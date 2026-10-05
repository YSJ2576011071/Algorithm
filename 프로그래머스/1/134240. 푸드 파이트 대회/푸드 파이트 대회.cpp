#include <string>
#include <vector>

using namespace std;

string solution(vector<int> food) {
    string answer = "";
    string an = "";
    for (int i = 0 ; i < food.size() ; i++) {
        //if (i < 2) {continue;}
        if (food[i] >= 2) {
            for (int j = 0 ; j < food[i]/2 ; j++) {
                answer += to_string(i);
            }
        }
    }
    for (int i = answer.length() ; i > 0 ; i--) {
        an += answer[i-1]; 
    }
    answer = answer + "0" + an;
    return answer;
}