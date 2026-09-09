#include <string>
#include <vector>
#include <cmath>

using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> arr3;
    string a1;
    vector<string> arr4;
    vector<string> answer;
    for (int i = 0; i < n ; i++) {
        for (int k = n-1; k > -1 ; k--) {
            int divisor = pow(2, k);
            int a = arr1[i] / divisor;
            if (a == 1) {
                a1 += "#";
                arr1[i] %= divisor;
            } else {
                a1 += " ";
            }
        }
        arr3.push_back(a1);
        a1 = "";
    }
    for (int i = 0; i < n ; i++) {
        for (int k = n-1; k > -1 ; k--) {
            int divisor = pow(2, k);
            int a = arr2[i] / divisor;
            if (a == 1) {
                a1 += "#";
                arr2[i] %= divisor;
            } else {
                a1 += " ";
            }
        }
        arr4.push_back(a1);
        a1 = "";
    }
    for (int i = 0; i < n ; i++) {
        for (int k = 0; k < n ; k++) {
            //C++에서 char비교는 홀따옴표
            if (arr3[i][k] == '#' || arr4[i][k] == '#') {
                a1 += "#";
            } else {
                a1 += " ";
            }
        }
        answer.push_back(a1);
        a1 = "";
    }
    return answer;
}