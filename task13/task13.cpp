/*
Bыведите на экран все прописные русские буквы и их номера.

author : Dubina Vlad
	created : 09.10.2018
	uppdated : 09.10.2018
	*/
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus"); //Кодировка windows-1251 

	for (char i = 'а'; i <= 'я'; i++) {
		cout << i << ": " << (unsigned int)(unsigned char)i << endl; 
	}

	cin.get();
	return 0;
}