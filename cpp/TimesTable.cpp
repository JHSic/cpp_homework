#include <iostream>

using namespace std;

int main() {
	int num, times, printNum;

	cout << "�� �ܱ��� ����ұ��? : ";
	cin >> num;

	cout << "����� ���ұ��? :";
	cin >> times;

	cout << "���ٿ� ��ܾ� ����ұ��? :";
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