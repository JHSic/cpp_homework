#pragma once
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Matrix {
public:
	static const int ARR_SIZE = 3;
	Matrix();
	Matrix(int insertMatrix[ARR_SIZE][ARR_SIZE]);
	void print();
	Matrix add(Matrix m2);
	Matrix multi(Matrix m2);
	void setArr();
private:
	int matrix[ARR_SIZE][ARR_SIZE];
};