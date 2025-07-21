#include <iostream>
using namespace std;

int findMaxConsecutiveOnes(int arr[], int n) {
    int maxCount = 0, currentCount = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 1) {
            currentCount++;
            if (currentCount > maxCount) {
                maxCount = currentCount;
            }
        }
        else {
            currentCount = 0;
        }
    }
    return maxCount;
}

int main() {
    int n = 9;
    int arr[n] = {1, 1, 0, 1, 1, 1, 0, 1, 1};
    int maxConsecutiveOnes = findMaxConsecutiveOnes(arr, n);
    cout << "The maximum number of consecutive 1s is: " << maxConsecutiveOnes << endl;
    return 0;
}