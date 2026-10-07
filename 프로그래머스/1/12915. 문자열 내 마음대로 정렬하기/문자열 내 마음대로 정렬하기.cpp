#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int idx;
bool comp(string a, string b)
{
    if(a[idx]<b[idx])
        return true;
    else if(a[idx]==b[idx])
    {
        if(a<b)
            return true;
        return false;
    }
    return false;
}

vector<string> solution(vector<string> strings, int n) {
    vector<string> answer;
    idx = n;
    sort(strings.begin(),strings.end(),comp);
    answer = strings;
    return answer;
}