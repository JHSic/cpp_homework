#include "Fraction.h"

int main(){
    Fraction f1, f2;

    cout << "���ڿ� �и� ������ �Է��ϼ��� : ";
    cin >> f1; // �и� 0���� ������ �ٽ� �Է� 

    cout << "���ڿ� �и� ������ �Է��ϼ��� : ";
    cin >> f2; // �и� 0���� ������ �ٽ� �Է� 

    cout << f1 << " + " << f2 << " = " << f1 + f2 << endl;
    cout << f1 << " - " << f2 << " = " << f1 - f2 << endl;
    cout << f1 << " * " << f2 << " = " << f1 * f2 << endl;
    cout << f1 << " / " << f2 << " = " << f1 / f2 << endl;

    if (f1 < f2)
        cout << f1 << " < " << f2 << endl;
    else if (f1 > f2)
        cout << f1 << " > " << f2 << endl;
    else if (f1 == f2)
        cout << f1 << " == " << f2 << endl;

    return 0;
}