#include <iostream>
using namespace std;

int main() {
    int rows = 5;
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows; j++) {
            cout << (i + j) % 2 << " ";
        }
        cout << endl;
    }
    return 0;
}
