#include <iostream>

using namespace std;

void toBinary(int num);

int main() {
	int num = 0;

	cout << "10������ �Է��Ͻÿ�. : ";

	cin >> num;
	toBinary(num);

	return 0;
}

void toBinary(int num) {
	if (num <= 1) {
		cout << num;
		return;
	}
	
	toBinary(num / 2);
	cout << num % 2;
}