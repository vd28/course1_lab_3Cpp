/*
B������� �� ����� ��� ��������� ������� ����� � �� ������.

author : Dubina Vlad
	created : 09.10.2018
	uppdated : 09.10.2018
	*/
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus"); //��������� windows-1251 

	for (char i = '�'; i <= '�'; i++) {
		cout << i << ": " << (unsigned int)(unsigned char)i << endl; 
	}

	cin.get();
	return 0;
}