#include <iostream>

using namespace std;

int main() {

	while (true) {
		cout << "�ε��Ҽ��� ���� �Է��ϼ���(0���� ����) : ";
		double num;
		cin >> num;

		if (num == 0) {
			cout << "����";
			break;
		}
		cout << "������: " << int(num) << " �Ҽ�����: " << num - int(num) << endl;
	}
	return 0;
}