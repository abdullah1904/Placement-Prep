#include <iostream>
#include <vector>
using namespace std;

void sortArrayNums(vector<int>& nums){
    int low=0, mid=0, high=nums.size()-1;
    while(mid <= high){
        if(nums[mid] == 0){
            swap(nums[mid], nums[low]);
            low++;
            mid++;
        }
        else if(nums[mid] == 1){
            mid++;
        }
        else if(nums[mid] == 2){
            swap(nums[mid], nums[high]);
            high--;
        }
    }
}

int main(){
    vector<int> nums = {2,0,2,1,1,0};
    sortArrayNums(nums);
    cout << "Sorted array: ";
    for(int i = 0; i<nums.size(); i++){
        cout << nums[i] << " ";
    }
    return 0;
}