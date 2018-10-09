/*
Распечатайте на экране значения 
основных математических констант, объявленных в библиотеке math.h.
author : Dubina Vlad
created : 09.10.2018
uppdated : 09.10.2018
*/
#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
using namespace std;

int main() {
	cout << "e =" << M_E << endl;
	cout << "log2(e)= " << M_LOG2E << endl;
	cout << "log10(e) = " << M_LOG10E << endl;
	cout << "ln(2) = " << M_LN2 << endl;
	cout << "ln(10) = " << M_LN10 << endl;
	cout << "pi = " << M_PI << endl;
	cout << "pi/2 = " << M_PI_2 << endl;
	cout << "pi/4 = " << M_PI_4 << endl;
	cout << "1/pi = " << M_1_PI << endl;
	cout << "2/pi = " << M_2_PI << endl;
	cout << "2/sqrt(pi) = " << M_2_SQRTPI << endl;
	cout << "sqrt(2) = " << M_SQRT2 << endl;
	cout << "1/sqrt(2) = " << M_SQRT1_2 << endl;

	cin.get();
	return 0;
}