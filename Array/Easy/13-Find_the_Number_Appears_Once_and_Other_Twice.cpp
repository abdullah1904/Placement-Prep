#include <iostream>
using namespace std;

int findNumberAppearsOnce(int arr[], int n) {
    int res = 0;
    for (int i = 0; i < n; i++) {
        res = res ^ arr[i];
    }
    return res;
}

int main(){
    int n = 5;
    int arr[n] = {4, 1, 2, 1, 2};
    int result = findNumberAppearsOnce(arr, n);
    cout << "The number that appears once is: " << result << endl;
    return 0;
}