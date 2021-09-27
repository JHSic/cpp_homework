#include <iostream>

using namespace std;

void decimalToBinary(int n, int count);

int main() {
	int num, count = 0;

	while (true) {
		cout << "10���� �Է�(����� 0) : ";
		cin >> num;
		if (num == 0) {
			cout << "����";
			break;
		}
		else if (num < 0) {
			cout << "0���� ū 10���� ���� �Է�!" << endl;
			continue;
		}
		cout << "2������ ";
		decimalToBinary(num, count);
		cout << endl;
	}
	return 0;
}

void decimalToBinary(int n, int count) {
	if (n == 0) {
		return;
	}
	decimalToBinary(n / 2, ++count);

	if (count % 4 == 0 && n / 2 >= 1) {
		cout << " ";
	}
	cout << n % 2;
}