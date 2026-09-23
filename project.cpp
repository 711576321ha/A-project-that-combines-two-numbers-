#include <iostream>
using namespace std;

int main() {
    double num1, num2, sum;
    
    cout << "ادخل الرقم الاول: ";
    cin >> num1;
    
    cout << "ادخل الرقم الثاني: ";
    cin >> num2;
    
    sum = num1 - num2;
    
    cout << "الناتج هو: " << sum << endl;
    
    return 0;
}