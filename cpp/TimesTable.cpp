#include <iostream>

using namespace std;

int main() {
	int num, times, printNum;

	cout << "몇 단까지 출력할까요? : ";
	cin >> num;

	cout << "몇까지 곱할까요? :";
	cin >> times;

	cout << "한줄에 몇단씩 출력할까요? :";
	cin >> printNum;

	for (int i = 1; i <= num; i += printNum) {
		for (int j = 1; j <= times; j++) {
			for (int k = i; k < i + printNum; k++) {
				if (k > num) {
					break;
				}
				cout << k << " * " << j << " = " << j * k << "\t";
			}
			cout << endl;
		}
		cout << endl;
	}
	return 0;
}