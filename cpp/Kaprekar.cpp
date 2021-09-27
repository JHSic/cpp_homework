#include <iostream>
#include <string>

using namespace std;

int main() {
	int num, temp = 0, times = 0;

	cout << "1 ~ 1000 사이의 정수를 입력하시오. : ";

	cin >> num;
	
	for (int i = 1; i <= num; i++) {
		string s = to_string(i);
		temp = pow(i, 2);
		times = pow(10, s.size());

		if (i == temp % times + temp / times) {
			cout << i << endl;
		}
	}
	return 0;
}