#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int>& nums) {
    int count = 0, occurrence = 0;
    int element = -1;
    for(int i = 0; i<nums.size(); i++){
        if(count == 0){
            element = nums[i];
        }
        if(nums[i] == element){
            count++;
        }
        else{
            count--;
        }
    }
    for(int i = 0; i<nums.size(); i++){
        if(nums[i] == element){
            occurrence++;
        }
    }
    if(occurrence <= nums.size()/2){
        return -1;
    }
    return element;   
}

int main(){
    vector<int> nums = {2,2,1,1,1,2,2};
    cout << majorityElement(nums) << endl;
    return 0;
}