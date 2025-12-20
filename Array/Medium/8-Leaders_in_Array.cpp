#include <iostream>
#include <vector>
using namespace std;

vector<int> findLeaders(const vector<int>& nums) {
    vector<int> leaders;
    int max = INT32_MIN;
    for(int i = nums.size() - 1; i >= 0; i--) {
        if(nums[i] > max){
            leaders.push_back(nums[i]);
            max = nums[i];
        }
    }
    return leaders;
}

int main(){
    vector<int> nums = {10, 22, 12, 3, 0, 6};
    vector<int> leaders = findLeaders(nums);
    cout << "Leaders in the array are: ";
    for(int i=0;i<leaders.size();i++){
        cout << leaders[i] << " ";
    }
    return 0;
}