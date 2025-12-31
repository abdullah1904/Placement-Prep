#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int longestConsecutive(const vector<int> &nums){
    int n = nums.size();
    if (n == 0) return 0;
    unordered_set<int> numSet;
    int longestStreak = 0;
    for (int i = 0; i < n; i++){
        numSet.insert(nums[i]);
    }
    for (int i = 0; i < n; i++){
        if (!numSet.count(nums[i] - 1)){
            int currentNum = nums[i];
            int currentStreak = 1;
            while (numSet.count(currentNum + 1)){
                currentNum += 1;
                currentStreak += 1;
            }
            longestStreak = max(longestStreak, currentStreak);
        }
    }
    return longestStreak;
}

int main(){
    vector<int> arr = {0, 3, 7, 2, 5, 8, 4, 6, 0, 1};
    cout << "Length of the longest consecutive elements sequence is: " << longestConsecutive(arr) << endl;
    return 0;
}