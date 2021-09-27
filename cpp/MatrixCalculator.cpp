#include <iostream>

using namespace std;

void printMatrix(int arr[][3]);
void matrixAdd(int arr1[][3], int arr2[][3], int addArr[][3]);
void matrixMulti(int arr1[][3], int arr2[][3], int multiArr[][3]);

int main() {
	int arr1[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 }, 
		arr2[3][3] = { 1, -1, 0, 0, -1, 1, -1, 1, 0 }, 
		addArr[3][3], multiArr[3][3] = { 0 };

	cout << "ù��° ���" << endl;
	printMatrix(arr1);
	
	cout << "�ι�° ���" << endl;
	printMatrix(arr2);

	cout << "�� ����� ����" << endl;
	matrixAdd(arr1, arr2, addArr);
	
	cout << "�� ����� ����" << endl;
	matrixMulti(arr1, arr2, multiArr);
	
	return 0;
}

void printMatrix(int arr[][3]) {
	for (int i = 0; i < 3; i++) {
		cout << "|";
		for (int j = 0; j < 3; j++) {
			cout.width(3);
			cout.fill(' ');
			cout << arr[i][j];
		}
		cout << " |" << endl;
	}
}
void matrixAdd(int arr1[][3], int arr2[][3], int addArr[][3]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			addArr[i][j] = arr1[i][j] + arr2[i][j];
		}
	}
	printMatrix(addArr);
}
void matrixMulti(int arr1[][3], int arr2[][3], int multiArr[][3]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 3; k++) {
				multiArr[i][j] += arr1[i][k] * arr2[k][j];
			}
		}
	}
	printMatrix(multiArr);
}