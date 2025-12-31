#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int longestSubarrayWithSumK(int arr[], int n, int k) {
    int left = 0, right = 0, sum = arr[0], maxLength = 0;
    while(right < n){
        while(sum > k && left <= right) {
            sum -= arr[left];
            left++;
        }
        if(sum == k) {
            maxLength = max(maxLength, right - left + 1);
        }
        right++;
        if(right < n) {
            sum += arr[right];
        }
    }
    return maxLength;
}

int longestSpecialSubarrayWithSumK(int arr[], int n, int k){
    int sum = 0, maxLength = 0;
    map<int, int> prefixSumIndex;
    for(int i = 0; i < n; i++){
        sum += arr[i];
        if(prefixSumIndex.find(sum - k) != prefixSumIndex.end()){
            maxLength = max(maxLength, i - prefixSumIndex[sum - k]);
        }
        if(prefixSumIndex.find(sum) == prefixSumIndex.end()){
            prefixSumIndex[sum] = i;
        }
    }
    return maxLength;
}

int main(){
    int n = 5, k = 10;
    int arr[n] = {2, 3, 5, 1, 9};
    cout << "Length of longest subarray with sum " << k << " is: " << longestSubarrayWithSumK(arr, n, k) << endl;
    n = 3, k = 1;
    int specialArr[n] = {-1, 1, 1};
    cout << "Length of longest special subarray with sum " << k << " is: " << longestSpecialSubarrayWithSumK(specialArr, n, k) << endl;
    return 0;
}