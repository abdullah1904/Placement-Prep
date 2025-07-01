#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            return i; 
        }
    }
    return -1; 
}

int main(){
    int n = 5;
    int arr[n]={1,2,3,4,5};
    int key = 3;
    int index = linearSearch(arr, n, key);
    if(index != -1) {
        cout<< key << " found at index " << index << endl;
    }
    else{
        cout<< key << " not found in the array" << endl;
    }
    return 0;
}