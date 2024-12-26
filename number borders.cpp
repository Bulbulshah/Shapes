#include <iostream>
using namespace std;

int main() {
    int size = 5;
    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= size; j++) {
            if (i == 1 || i == size || j == 1 || j == size) {
                cout << "1";
            } else {
                cout << "0";
            }
        }
        cout << endl;
    }
    return 0;
}
