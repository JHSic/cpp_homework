#include <iostream>

using namespace std;

void merge(int arr1[], int arr2[], int mergeArr[]);
const int ARR_SIZE = 5;

int main() {
	int arr1[ARR_SIZE], arr2[ARR_SIZE], mergeArr[ARR_SIZE * 2];

	cout << "�������� ���� 5�� �Է�: ";
	for (int i = 0; i < ARR_SIZE; i++) {
		cin >> arr1[i];
	}

	cout << "�������� ���� 5�� �Է�: ";
	for (int i = 0; i < ARR_SIZE; i++) {
		cin >> arr2[i];
	}

	cout << "�պ��� ���� 10�� :";
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
/*mergeArr�� ������ �� * �� ������� ������ �޸� ������ ����� ���� �������� ���Ͽ� ������ �߻��ϰ�
*�� ������� ���mergeArr�� �����ؼ� �ε��� ������� ����ϴ� ��� �ùٸ� ���� ��������
�ε��� ����� �ƴ� �׳� mergeArr�� ����ϴ� ��� �̻��� ���� ��µȴ�.*/