#include <iostream>
#include <vector>
using namespace std;

void spiralMatrix(int n) {
    vector<vector<int>> matrix(n, vector<int>(n));
    int value = 1;
    int top = 0, bottom = n - 1, left = 0, right = n - 1;

    while (top <= bottom && left <= right) {
        for (int i = left; i <= right; i++) {
            matrix[top][i] = value++;
        }
        top++;
        for (int i = top; i <= bottom; i++) {
            matrix[i][right] = value++;
        }
        right--;
        for (int i = right; i >= left; i--) {
            matrix[bottom][i] = value++;
        }
        bottom--;
        for (int i = bottom; i >= top; i--) {
            matrix[i][left] = value++;
        }
        left++;
    }

    for (auto row : matrix) {
        for (auto elem : row) {
            cout << elem << " ";
        }
        cout << endl;
    }
}

int main() {
    spiralMatrix(4);
    return 0;
}
