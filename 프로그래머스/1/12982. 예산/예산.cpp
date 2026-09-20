#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> d, int budget) {
    int answer = 0;
    int min = 100000;
    int index = 0;
    int temp = 0;
    for (int i = 0 ; i < d.size() ; i++) {
        min = 100000;
        for (int j = i ; j < d.size() ; j++) {
            if (min >= d[j]) {
                min = d[j];
                index = j;
            }
        }
        temp = d[i];
        d[i] = d[index];
        d[index] = temp;
        budget -= d[i];
        if (budget < 0) {
            return answer;
        }
        answer += 1;
    }
    return answer;
}