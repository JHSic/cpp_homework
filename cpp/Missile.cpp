#include <iostream>

using namespace std;

struct Missile {
	int num;
};
Missile getData();

int main() {
	Missile missile;
}

Missile getData() {
	bool flag = true;
	int select = 0;
	while (flag) {
		cout << "1. 미사일 발사\n2. 미사일 존재 확인\n3. 종료";
		cin >> select;
		if (select == 1) {

		}
	}
}