#include <iostream>
#include "hw1.h"

using namespace std;

int main(){
    shisoku nyanya;

    cout << "整数を入力してください \n整数a:" << endl;
    cin >> nyanya.numa;
    cout << "整数b:" << endl;
    cin >> nyanya.numb;

    cout << "a+b=" << nyanya.plus(nyanya.numa,nyanya.numb) << endl;
    cout << "a-b=" << nyanya.minus(nyanya.numa,nyanya.numb) << endl;
    cout << "a*b=" << nyanya.times(nyanya.numa,nyanya.numb) << endl;
    cout << "a/b=" << nyanya.divide(nyanya.numa,nyanya.numb) << endl;

}