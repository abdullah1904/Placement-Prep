#include <iostream>
#include <algorithm>
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

int main(){
    int n = 5, k = 10;
    int arr[n] = {2, 3, 5, 1, 9};
    cout << "Length of longest subarray with sum " << k << " is: " << longestSubarrayWithSumK(arr, n, k) << endl;
    return 0;
}