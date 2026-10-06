#include <string>
#include <vector>

using namespace std;

int func(int a, int b , int c) {
    if (c < a) {
        return 0;
    }
    int new_coke = (c/a) * b;
    int reminder = c%a;
    
    return new_coke + func(a,b,new_coke+reminder);
    }

int solution(int a, int b, int n) {
    return func(a,b,n);
}

