#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    answer.push_back(arr[0]);
    int head = 0;

    for (int i = 0 ; i < arr.size() ; i++) {
        if (answer[head] != arr[i]) {
            head++;
            answer.push_back(arr[i]);
        }
    }

    return answer;
}