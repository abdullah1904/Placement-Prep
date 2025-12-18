#include <iostream>
#include <vector>
using namespace std;

int maxSubArraySum(vector<int>& nums) {
    int sum = 0, maxSum = INT16_MIN;
    int start = 0, end = 0, tempStart = 0;
    for (int i = 0; i< nums.size(); i++){
        if(sum == 0){
            tempStart = i;
        }
        sum += nums[i];
        if(sum > maxSum){
            start = tempStart;
            end = i;
            maxSum = sum;
        }
        if (sum < 0) {
            sum = 0;
        }
    }
    cout << "Subarray indices: [" << start << ", " << end << "]" << endl;
    return maxSum;

}

int main(){
    vector<int> nums = { -2, 1, -3, 4, -1, 2, 1, -5, 4 };
    cout << "Maximum Subarray Sum: " << maxSubArraySum(nums) << endl;
    return 0;
}