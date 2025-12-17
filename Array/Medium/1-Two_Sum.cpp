#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> num_map;
        for(int i = 0; i < nums.size(); i++){
            int complement = target - nums[i];
            if(num_map.find(complement) != num_map.end()){
                return {num_map[complement],i};
            }
            num_map[nums[i]] = i;
        }
        return {-1,-1};
    }

int main(){
    int target = 14;
    vector<int> nums = {2, 6, 5, 8, 11};
    vector<int> result = twoSum(nums,target);
    cout << "Indices: " << result[0] << ", " << result[1] << endl;
    return 0;
}