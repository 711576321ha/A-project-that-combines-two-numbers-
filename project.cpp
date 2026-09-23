#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char op;

    cout << "ادخل الرقم الاول: ";
    cin >> num1;

    cout << "ادخل الرقم الثاني: ";
    cin >> num2;

    cout << "اختر العملية (+ للجمع و - للطرح): ";
    cin >> op;

    if (op == '+') {
        cout << "الناتج هو: " << num1 + num2 << endl;
    } 
    else if (op == '-') {
        cout << "الناتج هو: " << num1 - num2 << endl;
    } 
    else {
        cout << "عملية غير صحيحة!" << endl;
    }

    return 0;
}