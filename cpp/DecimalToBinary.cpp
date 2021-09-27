#include <iostream>

using namespace std;

void decimalToBinary(int n, int count);

int main() {
	int num, count = 0;

	while (true) {
		cout << "10진수 입력(종료는 0) : ";
		cin >> num;
		if (num == 0) {
			cout << "종료";
			break;
		}
		else if (num < 0) {
			cout << "0보다 큰 10진수 값을 입력!" << endl;
			continue;
		}
		cout << "2진수는 ";
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