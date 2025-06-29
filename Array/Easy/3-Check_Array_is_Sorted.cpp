// Check if an Array is Sorted

#include <iostream>
using namespace std;

bool isSorted(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) {
            return false; 
        }
    }
    return true;
}

int main() {
    int n = 5;
    int arr[n] = {1, 2, 3, 5, 4};
    if (isSorted(arr, n)) {
        cout << "Array is sorted." << endl;
    }
    else {
        cout << "Array is not sorted." << endl;
    }
    return 0;
}