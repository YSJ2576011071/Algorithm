#include <iostream>
#include <string>

using namespace std;
int solution(int n)
{
    int answer = 0;
    
    string N;
    
    N += to_string(n);
    
    for (int i = 0 ; i < N.length() ; i++) {
        int num = N[i] - '0';
        answer += num;
    }

    return answer;
}