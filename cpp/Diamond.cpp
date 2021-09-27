#include <iostream>

using namespace std;

int main() {
	int num = 0;

	do {
		cout << "크기(3보다 큰 홀수) : ";
		cin >> num;

		if (num % 2 == 0 || num <= 1) {
			continue;
		}
		for (int i = 1; i <= num / 2 + 1; i++) {
			for (int j = 0; j <= num / 2 - i; j++) {
				cout << " ";
			}
			for (int j = 0; j < 2 * i - 1; j++) {
				cout << "*";
			}
			cout << endl;
		}
		for (int i = 1; i <= num / 2; i++) {
			for (int j = i; j > 0; j--) {
				cout << " ";
			}
			for (int j = num - 2 * i; j > 0; j--) {
				cout << "*";
			}
			cout << endl;
		}
	} while (num != 0);

	return 0;
}