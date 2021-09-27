#include <iostream>

using namespace std;

void kaprecar(int num, int cycle);

int main() {
	int num, cycle = 0;

	cout << "4자리 정수를 입력하시오. : ";

	cin >> num;

	kaprecar(num, cycle);
	
	return 0;
}

void kaprecar(int num, int cycle) {
	const int SIZE = 4;
	int arr[SIZE];
	int asc = 0, desc = 0, result = 0;
		
	for (int i = 0; i < SIZE; i++) {
		arr[i] = num % 10;
		num /= 10;
	}
	for (int i = 0; i < SIZE - 1; i++) {
		for (int j = i + 1; j < SIZE; j++) {
			if (arr[i] > arr[j]) {
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for (int i = 0; i < SIZE; i++) {
		asc = arr[i] + asc * 10;
		
	}
	for (int i = SIZE - 1; i >= 0; i--) {
		desc *= 10;
		desc += arr[i];
	}

	result = desc - asc;
	++cycle;

	if (result == 6174) {
		cout << cycle;
		return;
	}
	kaprecar(result, cycle);
}