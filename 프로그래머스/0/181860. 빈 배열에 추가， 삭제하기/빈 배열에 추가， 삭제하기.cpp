#include <vector>
using namespace std;

vector<int> solution(vector<int> arr, vector<bool> flag) {
    vector<int> X;
    for(int i = 0; i < flag.size(); i++) {
        if(flag[i]) 
            for(int j = 0; j < 2 * arr[i]; j++) { X.push_back(arr[i]); }
        else 
            for(int j = 0; j < arr[i]; j++) { X.pop_back(); }
    }
    
    return X;
}