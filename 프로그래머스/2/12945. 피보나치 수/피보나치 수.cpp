#include <string>
#include <vector>

using namespace std;

long long p (int n) {
    
    if (n <= 0) return 0;
    if (n == 1) return 1;
    
    
    long long a1 = 0;
    long long a2 = 1;
    long long ne = 0;
    
    int count = 2;
    while (count <= n) {
        ne = (a1 + a2)% 1234567;
        a1 = a2;
        a2 = ne;
        count++;
    }
    return a2;
}

long long solution(int n) {
    return p(n);
}