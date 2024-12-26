#include <iostream>
using namespace std;

int main() {
    int size = 5;
    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= size; j++) {
            if (i == (size / 2) + 1 || j == (size / 2) + 1) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
