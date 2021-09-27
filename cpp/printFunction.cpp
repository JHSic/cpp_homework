#include <iostream>

using namespace std;

int calculateY1(int x);
int calculateY2(int x);

struct Function {
	int x[30];
	int y[30];
};

int main() {
	while (true) {
		int num;
		Function function;

		cout << "함수 선택\n1. y = 2x - 2\n2. y = x^2\n3. 종료\n입력 : ";

		cin >> num;

		if (num == 1) {
			int tempX = 0;
			int tempY = 0;
			for (int i = -15; i <= 15; i++) {
				function.x[tempX++] = i;
				function.y[tempY++] = calculateY1(i);
			}
			for (int i = 29; i >= 0; i--) {
				if (function.y[i] <= 15 && function.y[i] >= 15) {
					for (int j = 0; j < function.x[i] + 15; j++) {
						cout << " ";
					}
					cout << "*";
				}
				cout << endl;
			}
		}
		else if (num == 2) {
			int tempX = 0;
			int tempY = 0;
			for (int i = -15; i <= 15; i++) {
				function.x[tempX++] = i;
				function.y[tempY++] = calculateY1(i);
			}
		}
		else if (num == 3) {
			cout << "종료";
			break;
		}
		else{
			cout << "번호를 다시 입력하세요. \n";
		}

	}
	return 0;
}

int calculateY1(int x) {
	return 2 * x - 2;
}
int calculateY2(int x) {
	return pow(x, 2);
}