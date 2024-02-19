#include <algorithm>
#include <vector>
using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    for (int& a : arr) {
        if(a % divisor == 0) answer.push_back(a);
    }
    
    if(answer.size() == 0) answer.push_back(-1);
    else sort(answer.begin(), answer.end());
    
    return answer;
}