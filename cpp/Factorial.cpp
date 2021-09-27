#include <iostream>

using namespace std;

int getFactorial(int n);

int main() {
	int num;

	cout << "Factorial�� ���ϰ� ���� ���� �Է��Ͻÿ�. : ";

	cin >> num;

	cout << num << "!�� �� : " << getFactorial(num);
}

int getFactorial(int n) {
	/*int�� ������ - 2147483648 ~ 2147438647�̱� ������ �� ������ �Ѿ ��쿡 Ʋ�� ���� ��µȴ�.
	���Ѵ븦 �Է¹޾��� ���� ���� ó������ long long�� __int64�� ������ ������ ���� 19�ڸ� ���� 20�ڸ� ������ ����� �����ϹǷ�
	���Ѵ븦 �Է¹޾Ƽ� ��¹ޱ⿡�� �Ѱ谡 �ִٻ����Ͽ� JAVA���� ����غ��Ҵ� BigInteger�� c++������ ���� �����ؼ� ���Ѵ븦 
	�ذ��ϴ� ����� �ִٴ� ���� Ȯ���ߴ�. �ٸ� ������δ� �Է��� ���Ѵ��̹Ƿ� ������� ���Ѵ밡 ���� ���̱� ������
	string���� �Է°��� �ް� �����Ͽ� ����ϴ� �˰����� �����Ͽ� �ٽ� string���� ���ļ� ����ϴ� ����� �ִٴ� ���� Ȯ���ߴ�.
	*/
	int result = 1;
	for (int i = 2; i <= n; i++) {
		result *= i;
	}
	return result;
}