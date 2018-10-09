/*
Какого типа переменные подойдут для хранения следующей информации:
•	Возраст человека	Население города		Число звезд в галактике
•	Один байт ОЗУ	Средняя зарплата за год	Сведения курит или нет
•	Цвет фигуры		Длина в мм.			Длина в см.
Объявите и проинициализируйте эти переменные, дав имен смысловые имена. Вывести
	  на экран.

author : Dubina Vlad
created : 09.10.2018
uppdated : 09.10.2018
*/

#include <iostream>
using namespace std;

int main() {

	int age = 17;

	long population = 456234;

	unsigned long long nOfS = 2342357567;

	char bite = '$';

	double averageSalary = 3589.34;

	bool smoke = false;

	char colour[256] = "Blue";

	double lengthmm = 35.23;

	double lengthsm = 62.42;

	cout << "Age: " << age << endl;
	cout << "Poulation: " << population << endl;
	cout << "Number of stars: " << nOfS << endl;
	cout << "One bite simbol: " << bite << endl;
	cout << "Average salary per year: " << averageSalary << endl;
	cout << "Smoke: " << smoke << endl;
	cout << "Figure color: " << colour << endl;
	cout << "Length in mm: " << lengthmm << endl;
	cout << "Length in sm: " << lengthsm << endl;

	cin.get();
	return 0;
}