#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
	srand((unsigned int)time(NULL));
	int insert, cycle = 0, num = rand() % 100 + 1;

	cout << "나는 100이하의 자연수 하나를 생각하고 있습니다." << endl;

	while (true) {
		cout << "숫자를 짐작해서 입력하세요: ";
		cin >> insert;

		if (insert <= 0 || insert > 100) {
			cout << "잘못된 입력입니다. 다시 입력하세요.";
			continue;
		}

		cycle++;

		if (insert > num) {
			cout << "내가 생각하고 있는 숫자는 " << insert << "보다는 작은 숫자입니다." << endl;
		}
		else if (insert < num) {
			cout << "내가 생각하고 있는 숫자는 " << insert << "보다는 큰 숫자입니다." << endl;
		}
		else {
			cout << "맞췄습니다!!!" << cycle << "번 만에 성공하셨네요!";
			break;
		}
	}
	return 0;
}