#include <iostream>

using namespace std;

int main() {

	while (true) {
		cout << "정수 값을 입력하세요(0에서 종료) : ";
		int num;
		cin >> num;

		if (num == 0) {
			cout << "종료";
			break;
		}

		while (num > 9 || num < -9) {
			num = num / 10;
		}
		cout << "제일 큰 자리수 : " << num << endl;
	}
	return 0;
}