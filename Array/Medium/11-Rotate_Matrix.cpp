#include <iostream>
#include <vector>
using namespace std;

void rotate(vector<vector<int>>& matrix) {
    for(int i=0;i<matrix.size()-1;i++){
        for(int j=i+1;j<matrix[0].size();j++){
            if(i == j){
                continue;
            }
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    for(int i=0;i<matrix.size();i++){
        int left = 0;
        int right = matrix[0].size()-1;
        while(left<right){
            swap(matrix[i][left],matrix[i][right]);
            left++;
            right--;
        }
    }   
}

int main(){
    vector<vector<int>> matrix = {
        {5, 4, 2, 0}, 
        {6, 5, 0, 1}, 
        {7, 0, 3, 1}, 
        {0, 5, 1, 2}
    };
    rotate(matrix);
    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[0].size(); j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}