// Remove Duplicates in-place from Sorted Array

#include <iostream>
using namespace std;

int removeDuplicates(int arr[], int n) {
    int i = 0;
    for (int j = 1; j < n; j++) {
        if(arr[j] != arr[i]) {
            i++;
            arr[i] = arr[j];
        }
    }
    return i + 1; 
}

int main(){
    int n = 7;
    int arr[n] = {1,1,2,2,2,3,3};
    int newLength = removeDuplicates(arr, n);
    cout << "New length after removing duplicates: " << newLength << endl;
    for (int i = 0; i < newLength; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}