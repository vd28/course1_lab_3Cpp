/*
 акое значение BLUE в следующем перечислении:
	  enum COLOR{ WHITE, BLACK=100, RED, BLUE, GREEN=300};

author : Dubina Vlad
created : 09.10.2018
uppdated : 09.10.2018
*/

#include <iostream>
using namespace std;

enum COLOR { WHITE, BLACK = 100, RED, BLUE, GREEN = 300 };

int main(){

		cout << WHITE << endl;
		cout << BLACK << endl;
		cout << RED << endl;
		cout << BLUE << endl;
		cout << GREEN << endl;

	cin.get();
	return 0;
}