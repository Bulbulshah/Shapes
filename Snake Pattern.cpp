#include <iostream>
using namespace std;

int main() {
    int rows = 5, cols = 5;
    int num = 1;

    for (int i = 1; i <= rows; i++) {
        if (i % 2 != 0) {
            for (int j = 1; j <= cols; j++) {
                cout << num++ << " ";
            }
        } else {
            int end = num + cols - 1;
            for (int j = 1; j <= cols; j++) {
                cout << end-- << " ";
            }
            num += cols;
        }
        cout << endl;
    }
    return 0;
}
