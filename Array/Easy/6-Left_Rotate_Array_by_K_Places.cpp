#include <iostream>
#include <algorithm>
using namespace std;

void optimalLeftRotateByK(int arr[], int n, int k) {
    k = k % n; 
    reverse(arr, arr + k);
    reverse(arr + k, arr + n);
    reverse(arr, arr + n);
}

void leftRotateByK(int arr[], int n, int k) {
    k = k % n;
    int temp[k];
    for(int i = 0; i < k; i++) {
        temp[i] = arr[i];
    }
    for(int i = k; i < n; i++) {
        arr[i - k] = arr[i];
    }
    for(int i = n-k; i < n; i++) {
        arr[i] = temp[i - (n - k)];
    }
}

void rightRotateByK(int arr[], int n, int k) {
    k = k % n;
    int temp[k];
    for(int i = n-k; i < n; i++) {
        temp[i - (n - k)] = arr[i];
    }
    for(int i = n - 1; i >= k; i--) {
        arr[i] = arr[i - k];
    }
    for(int i = 0; i < k; i++) {
        arr[i] = temp[i];
    }
}


int main(){
    // int n = 7, k = 3;
    // int arr[n] = {1, 2, 3, 4, 5, 6, 7};
    int n = 4, k = 2;
    int arr[n] ={-1,-100,3,99};
    // leftRotateByK(arr, n, k);
    // optimalLeftRotateByK(arr, n, k);
    rightRotateByK(arr, n, k);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}