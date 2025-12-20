#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void nextPermutation(vector<int>& nums) {
    int breakIndex = -1;
    for(int i = nums.size() - 2; i >= 0; i--){
        if(nums[i] < nums[i + 1]){
            breakIndex = i;
            break;
        }
    }
    if(breakIndex == -1){
        reverse(nums.begin(), nums.end());
        return;
    }
    for(int i = nums.size() - 1 ; i > breakIndex; i--){
        if(nums[i] > nums[breakIndex]){
            swap(nums[i], nums[breakIndex]);
            break;
        }
    }
    reverse(nums.begin() + breakIndex + 1, nums.end());
}


int main(){
    vector<int> nums = {2, 1, 5, 4, 3, 0, 0};
    nextPermutation(nums);
    for(int i =0; i < nums.size(); i++){
        cout << nums[i] << " ";
    }
    return 0;
}