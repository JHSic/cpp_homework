#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
	srand((unsigned int)time(NULL));
	int insert, cycle = 0, num = rand() % 100 + 1;

	cout << "���� 100������ �ڿ��� �ϳ��� �����ϰ� �ֽ��ϴ�." << endl;

	while (true) {
		cout << "���ڸ� �����ؼ� �Է��ϼ���: ";
		cin >> insert;

		if (insert <= 0 || insert > 100) {
			cout << "�߸��� �Է��Դϴ�. �ٽ� �Է��ϼ���.";
			continue;
		}

		cycle++;

		if (insert > num) {
			cout << "���� �����ϰ� �ִ� ���ڴ� " << insert << "���ٴ� ���� �����Դϴ�." << endl;
		}
		else if (insert < num) {
			cout << "���� �����ϰ� �ִ� ���ڴ� " << insert << "���ٴ� ū �����Դϴ�." << endl;
		}
		else {
			cout << "������ϴ�!!!" << cycle << "�� ���� �����ϼ̳׿�!";
			break;
		}
	}
	return 0;
}