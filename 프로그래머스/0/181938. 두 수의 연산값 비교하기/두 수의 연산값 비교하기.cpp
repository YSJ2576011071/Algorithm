#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    string t;
    t = to_string(a) + to_string(b);
    int u = stoi(t);
    if (u > a*2*b) {
        return u;
    }else { return a*2*b;}
    
    return answer;
}