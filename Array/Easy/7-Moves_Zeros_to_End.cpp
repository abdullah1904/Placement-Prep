#include <iostream>
using namespace std;

void moveZerosToEnd(int arr[], int n) {
    int j = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            j = i;
            break;
        }
    }
    for (int i = j + 1; i < n; i++) {
        if (arr[i] != 0) {
            swap(arr[i], arr[j]);
            j++;
        }
    } 
}

int main(){
    int n = 10;
    int arr[n] = {1, 0, 2, 3, 2, 0, 0, 4, 5, 1};
    moveZerosToEnd(arr, n);
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}