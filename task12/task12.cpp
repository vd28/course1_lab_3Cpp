/*
Выдайте на экран подсказку для 
ввода числа типа signed long int, используя константы из библиотеки limits.h

author : Dubina Vlad
	created : 09.10.2018
	uppdated : 09.10.2018
	*/

#include <iostream>
#include <climits>
using namespace std;

int main() {
	signed long int a;
	cout << "Input integer value in range from " << LONG_MIN << " to " << LONG_MAX << endl;
	cin >> a;
	cin.ignore();

	cout << "Your number: " << a << endl;
	
	cin.get();
	return 0;
}

