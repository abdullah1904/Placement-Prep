// Second Largest Element in an Array without sorting

#include <iostream>
using namespace std;

int secondLargestElement(int arr[], int n) {
    int largest = INT16_MIN;
    int secondLargest = INT16_MIN;
    for(int i = 0; i < n; i++) {
        if(arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }
    return secondLargest;
}

int main(){
    int n = 6;
    int arr[n]={1,2,4,7,7,5};
    cout << "Second largest element in the array: " << secondLargestElement(arr, n) << endl;
    return 0;
}