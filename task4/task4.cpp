/*Измените программу 3. так, чтобы в ней обрабатывались сведения о двух сотрудниках.

author : Dubina Vlad
created : 09.10.2018
uppdated : 09.10.2018
*/

#include <iostream>
using namespace std;

int main() {
	for (int i = 1; i <= 2; i++) {
		int personnelNumber;
		cout << "Input personnel number: " << endl;
		cin >> personnelNumber;
		cin.ignore();

		char sername[256] = " ";
		cout << "Input your sername: " << endl;
		cin >> sername;
		cin.ignore();

		char gender[256] = " ";
		cout << "Input your gender: " << endl;
		cin >> gender;
		cin.ignore();

		double weight;
		cout << "Input your weight: " << endl;
		cin >> weight;
		cin.ignore();

		bool smoke = 0;
		cout << "If your smoke input <1> .If your do not smoke input <0>: " << endl;
		cin >> smoke;
		cin.ignore();

		double tariffRate;
		cout << "Input your tariff rate: " << endl;
		cin >> tariffRate;
		cin.ignore();

		cout << "Personel number: " << personnelNumber << endl;

		cout << "Sername: " << sername << endl;

		cout << "Gender: " << gender << endl;

		cout << "Weight: " << weight << endl;

		cout << "Smoke: " << smoke << endl;

		cout << "Tariff rate: " << tariffRate << endl;

		cout << "Press enter to continue." << endl;
	}
	

	cout << "Press enter to exit." << endl;
	cin.get();
	return 0;
}



