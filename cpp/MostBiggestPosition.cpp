#include <iostream>

using namespace std;

int main() {

	while (true) {
		cout << "���� ���� �Է��ϼ���(0���� ����) : ";
		int num;
		cin >> num;

		if (num == 0) {
			cout << "����";
			break;
		}

		while (num > 9 || num < -9) {
			num = num / 10;
		}
		cout << "���� ū �ڸ��� : " << num << endl;
	}
	return 0;
}