#include <iostream>
using namespace std;

int main() {
    int rows = 5;
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows; j++) {
            if (j == i || j == rows - i + 1) {
                cout << i << " ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}
