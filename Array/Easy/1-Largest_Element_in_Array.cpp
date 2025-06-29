// Largest Element in an Array

#include <iostream>
using namespace std;

int largestElement(int arr[], int n) {
    int max = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int n = 5;
    int arr1[] = {2,5,1,3,0};
    int arr2[] =  {8,10,5,7,9};
    cout<<"Largest element in arr1: "<<largestElement(arr1, n)<<endl;
    cout<<"Largest element in arr2: "<<largestElement(arr2, n)<<endl;
    
    return 0;
}