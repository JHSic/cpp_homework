#include <iostream>

using namespace std;

int main() {
    int num, sum;

    cout << "ют╥б : ";

    cin >> num;

    for (int i = 1; i <= num; i++) {
        sum = 0;
        for (int j = 1; j < i; j++) {
            if ((i % j) == 0) {
                sum += j;
            }
        }
        if (i == sum) {
            cout << i << "(";
            for (int j = 1; j <= i / 2; j++) {
                if (i % j == 0) {
                    if (j > 1) {
                        cout << "+";
                    }
                    cout << j;
                }
            }
            cout << ")" << endl;
        }
    }
    return 0;
}