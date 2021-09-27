#include "Matrix.h"

Matrix::Matrix(){
	setArr();
}

Matrix::Matrix(int insertMatrix[ARR_SIZE][ARR_SIZE]) {
	for (int i = 0; i < ARR_SIZE; i++) {
		for (int j = 0; j < ARR_SIZE; j++) {
			matrix[i][j] = insertMatrix[i][j];
		}
	}
}

void Matrix::setArr() {
	srand((unsigned int)time(NULL));

	for (int i = 0; i < ARR_SIZE; i++) {
		for (int j = 0; j < ARR_SIZE; j++) {
			matrix[i][j] = rand() % 20 - 10;
		}
	}
}

Matrix Matrix::add(Matrix m2) {
	int addResult[ARR_SIZE][ARR_SIZE] = { 0 };
	for (int i = 0; i < ARR_SIZE; i++) {
		for (int j = 0; j < ARR_SIZE; j++) {
			addResult[i][j] = matrix[i][j] + m2.matrix[i][j];
		}
	}
	return addResult;
}

Matrix Matrix::multi(Matrix m2) {
	int multiResult[ARR_SIZE][ARR_SIZE] = { 0, };
	for (int i = 0; i < ARR_SIZE; i++) {
		for (int j = 0; j < ARR_SIZE; j++) {
			for (int k = 0; k < ARR_SIZE; k++) {
				multiResult[i][j] += matrix[i][k] * m2.matrix[k][j];
			}
		}
	}
	return multiResult;
}

void Matrix::print() {
	for (int i = 0; i < ARR_SIZE; i++) {
		cout << "|";
		for (int j = 0; j < ARR_SIZE; j++) {
			cout.width(ARR_SIZE + 1);
			cout.fill(' ');
			cout << matrix[i][j];
		}
		cout << " |" << endl;
	}
	cout << endl;
}