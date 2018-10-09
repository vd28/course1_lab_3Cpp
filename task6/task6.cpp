/*
Объявите константу  со значением 3.14159 двумя способами.

author : Dubina Vlad
created : 09.10.2018
uppdated : 09.10.2018
*/

#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	cout << "PI = " << M_PI << endl;
	cout << "PI = " << acos(-1) << endl;

	cin.get();
	return 0;
}