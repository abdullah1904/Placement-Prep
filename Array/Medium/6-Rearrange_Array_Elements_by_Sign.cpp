#include <iostream>
#include <vector>
using namespace std;

vector<int> rearrangeArray(vector<int>& nums) {
    vector<int> positive, negative;
    vector<int> result(nums.size());
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] >= 0){
            positive.push_back(nums[i]);
        } else {
            negative.push_back(nums[i]);
        }
    }
    if(positive.size() > negative.size()){
        for (int i = 0; i < negative.size(); i++){
            result[2*i] = positive[i];
            result[2*i + 1] = negative[i];
        }
        int index = negative.size() * 2;
        for(int i = negative.size(); i < positive.size(); i++){
            result[index] = positive[i];
            index++;
        }
    }
    else{
        for (int i = 0; i < positive.size(); i++){
            result[2*i] = positive[i];
            result[2*i + 1] = negative[i];
        }
        int index = positive.size() * 2;
        for(int i = positive.size(); i < negative.size(); i++){
            result[index] = negative[i];
            index++;
        }
    }
    return result;
}

vector<int> rearrangeEqualArray(vector<int>& nums) {
    vector<int> result(nums.size());
    int posPtr = 0, negPtr = 1;
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] >= 0){
            result[posPtr] = nums[i];
            posPtr += 2;
        } else {
            result[negPtr] = nums[i];
            negPtr += 2;
        }
    }
    return result;
}

int main(){
    vector<int> nums = {3, 1, -2, -5, 2, -4};
    vector<int> result = rearrangeEqualArray(nums);
    for(int i=0; i<result.size(); i++){
        cout << result[i] << " ";
    }
    return 0;
}