#include <iostream>
using namespace std;

int findMissingNumber(int arr[], int n) {
    int total = n * (n + 1) / 2;
    int sum = 0; 
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return total - sum;
}

int main() {
    int n = 2;
    int arr[n] = {0,1};
    int missingNumber = findMissingNumber(arr, n);
    cout << "The missing number is: " << missingNumber << endl;
    return 0;
}