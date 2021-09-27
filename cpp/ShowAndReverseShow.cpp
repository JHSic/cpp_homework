#include <iostream>
#include <string>

using namespace std;

void showDigit(int n);
void showReverseDigit(int n);

int main() {
    int val;

    cout << "���� �Է�: ";

    cin >> val;

    cout << "�ٷ� ��� :";

    showDigit(val);

    cout << "\n�Ųٷ� ���:";

    showReverseDigit(val);

    return 0;
}

void showDigit(int n) {
    int digit = 0;

    if (n == 0) {
        return;
    }
    else {
        digit = n % 10;
        n /= 10;
        showDigit(n);
    }
    cout << " " << digit;
}

void showReverseDigit(int n) {
    int digit = 0;

    if (n == 0) {
        return;
    }
    else {
        digit = n % 10;
        n /= 10;
        cout << " " << digit;
        showReverseDigit(n);
    }
}