#include "Matrix.h"

int main(){
    Matrix m1, m2;
        
    m1.print();
    m2.print();

    Matrix m3 = m1.add(m2);

    cout << "두 행렬의 합은" << endl;

    m3.print();                                              

    m3 = m1.multi(m2);

    cout << "두 행렬의 곱은" << endl;

    m3.print();

    return 0;
}