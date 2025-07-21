#include <iostream>
#include <vector>
using namespace std;

void findUnion(int arr1[], int arr2[], int n,int m) {
    int i = 0, j = 0;
    vector<int> unionArr;
    while(i<n && j < m) {
        if(arr1[i] <= arr2[j]) {
            if(unionArr.empty() || unionArr.back() != arr1[i]) {
                unionArr.push_back(arr1[i]);
            }
            i++;
        }
        else{
            if(unionArr.empty() || unionArr.back() != arr2[j]) {
                unionArr.push_back(arr2[j]);
            }
            j++;
        }
    }
    while (i < n) {
        if(unionArr.empty() || unionArr.back() != arr1[i]) {
            unionArr.push_back(arr1[i]);
        }
        i++;
    }
    while (j < m) {
        if(unionArr.empty() || unionArr.back() != arr2[j]) {
            unionArr.push_back(arr2[j]);
        }
        j++;
    }
    cout << "Union of the two arrays is: ";
    for(int k = 0; k < unionArr.size(); k++) {
        cout << unionArr[k] << " ";
    }
}

int main() {
    int n = 10, m = 7;
    int arr1[n] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr2[m] = {2, 3, 4, 4, 5, 11, 12}; 
    findUnion(arr1, arr2, n, m);
    return 0;
}