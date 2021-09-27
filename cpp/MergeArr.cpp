#include <iostream>

using namespace std;

void merge(int arr1[], int arr2[], int mergeArr[]);
const int ARR_SIZE = 5;

int main() {
	int arr1[ARR_SIZE], arr2[ARR_SIZE], mergeArr[ARR_SIZE * 2];

	cout << "오름차순 정수 5개 입력: ";
	for (int i = 0; i < ARR_SIZE; i++) {
		cin >> arr1[i];
	}

	cout << "오름차순 정수 5개 입력: ";
	for (int i = 0; i < ARR_SIZE; i++) {
		cin >> arr2[i];
	}

	cout << "합병된 정수 10개 :";
	merge(arr1, arr2, mergeArr);

	return 0;
}

void merge(int arr1[], int arr2[], int mergeArr[]) {
	int arr1Count = 0, arr2Count = 0, mergeCount = 0;

	while (arr1Count < ARR_SIZE && arr2Count < ARR_SIZE) {
		if (arr1[arr1Count] < arr2[arr2Count]) {
			mergeArr[mergeCount++] = arr1[arr1Count++];
		}
		else {
			mergeArr[mergeCount++] = arr2[arr2Count++];
		}
	}
	while (arr1Count < ARR_SIZE) {
		mergeArr[mergeCount++] = arr1[arr1Count++];
	}	
	while (arr2Count < ARR_SIZE) {
		mergeArr[mergeCount++] = arr2[arr2Count++];
	}

	for (int i = 0; i < ARR_SIZE * 2; i++) {
		cout << " " << mergeArr[i];
	}
}
/*mergeArr를 리턴할 때 * 을 사용하지 않으면 메모리 공간에 저장된 값을 참조하지 못하여 오류가 발생하고
*을 사용했을 경우mergeArr를 리턴해서 인덱스 방식으로 출력하는 경우 올바른 값이 나오지만
인덱스 출력이 아닌 그냥 mergeArr를 출력하는 경우 이상한 값이 출력된다.*/