#include <iostream>
#include <vector>
using namespace std;

void findIntersection(int arr1[], int arr2[], int n, int m) {
    int i = 0, j = 0;
    vector<int> intersectionArr;
    while(i < n && j < m) {
        if(arr1[i] < arr2[j]) {
            i++;
        }
        else if(arr1[i] > arr2[j]) {
            j++;
        }
        else {
            if(intersectionArr.empty() || intersectionArr.back() != arr1[i]) {
                intersectionArr.push_back(arr1[i]);
            }
            i++;
            j++;
        }
    }
    cout << "Intersection of the two arrays is: ";
    for(int k = 0; k < intersectionArr.size(); k++) {
        cout << intersectionArr[k] << " ";
    }
}

int main(){
    int n = 8, m = 7;
    int arr1[n] = {1,2,2,3,3,4,5,6};
    int arr2[m] = {2,3,3,5,6,6,7};
    findIntersection(arr1, arr2, n, m);
    return 0;
}