#include <iostream>
using namespace std;

int main() {
    int rows = 5;
    for (int i = rows; i >= 1; i--) {
        for (int j = i; j >= 1; j--) {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}
