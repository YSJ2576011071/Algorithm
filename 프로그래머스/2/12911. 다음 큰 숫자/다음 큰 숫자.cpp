#include <iostream>

using namespace std;

int solution(int n) {
    int target_count = __builtin_popcount(n);
    int next_num = n + 1;
    
    // 1의 개수가 같아질 때까지 1씩 증가
    while (__builtin_popcount(next_num) != target_count) {
        next_num++;
    }
    
    return next_num;
}