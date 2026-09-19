#include <string>
#include <vector>

using namespace std;

//유클리드 호제법
int gcd(int a, int b)
{
    int c;
	while(b)
	{
		c = a % b;
		a = b;
		b = c;
	}
    return a;
}

int lcm(int a, int b) 
{
    return a * b / gcd(a,b);
}

vector<int> solution(int n, int m) {
    vector<int> answer;
    answer.push_back(gcd(n,m));
    answer.push_back(lcm(n,m));
    return answer;
}