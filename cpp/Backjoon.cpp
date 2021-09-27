#include <iostream>

using namespace std;

bool arr[10001];

int selfNum(int num);

int main() {

	for (int i = 1; i < 10001; i++) {
		int idx = selfNum(i);

		if (idx <= 10001) {
			arr[idx] = true;
		}
	}

	for (int i = 1; i < 10001; i++) {
		if (!arr[i]) {
			cout << i << endl;
		}
	}
	return 0;

}

int selfNum(int num) {
	int sum = num;

	while (true) {
		if (num == 0) {
			break;
		}
		sum += num % 10;
		num /= 10;
	}

	return sum;
}
