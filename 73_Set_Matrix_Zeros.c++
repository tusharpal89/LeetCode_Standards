#include <iostream>
#include <vector>

using namespace std;

void setZeroes(vector<vector<int>>& arr) {
    int row = arr.size();
    if (row == 0) return;
    int col = arr[0].size();

    vector<int> rows(row, 0);
    vector<int> cols(col, 0);

    // Mark rows and cols
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (arr[i][j] == 0) {
                rows[i] = 1;
                cols[j] = 1;
            }
        }
    }

    // Set zeroes
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (rows[i] || cols[j]) {
                arr[i][j] = 0;
            }
        }
    }
}

int main() {
    // Example matrix
    vector<vector<int>> matrix = {
        {1, 1, 1},
        {1, 0, 1},
        {1, 1, 1}
    };

    setZeroes(matrix);

    // Print result
    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[0].size(); j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}