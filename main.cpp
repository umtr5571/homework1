#include <iostream>
#include "hw1.h"

using namespace std;

int main(){
    shisoku nyanya;
    int a,b;

    cout << "整数を入力してください \n整数a:" << endl;
    cin >> a;
    cout << "整数b:" << endl;
    cin >> b;

    cout << "a+b=" << nyanya.plus(a,b) << endl;
    cout << "a-b=" << nyanya.minus(a,b) << endl;
    cout << "a*b=" << nyanya.times(a,b) << endl;
    cout << "a/b=" << nyanya.divide(a,b) << endl;

}