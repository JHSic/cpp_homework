#include <iostream>

using namespace std;

int getFactorial(int n);

int main() {
	int num;

	cout << "Factorial을 구하고 싶은 수를 입력하시오. : ";

	cin >> num;

	cout << num << "!의 값 : " << getFactorial(num);
}

int getFactorial(int n) {
	/*int의 범위가 - 2147483648 ~ 2147438647이기 때문에 이 범위를 넘어선 경우에 틀린 값이 출력된다.
	무한대를 입력받았을 때의 경우는 처음에는 long long과 __int64를 생각을 했지만 각각 19자리 수와 20자리 수까지 출력이 가능하므로
	무한대를 입력받아서 출력받기에는 한계가 있다생각하여 JAVA에서 사용해보았던 BigInteger가 c++에서는 직접 구현해서 무한대를 
	해결하는 방법도 있다는 것을 확인했다. 다른 방법으로는 입력이 무한대이므로 결과값도 무한대가 나올 것이기 때문에
	string으로 입력값을 받고 분할하여 계산하는 알고리즘을 구현하여 다시 string으로 합쳐서 출력하는 방법도 있다는 것을 확인했다.
	*/
	int result = 1;
	for (int i = 2; i <= n; i++) {
		result *= i;
	}
	return result;
}