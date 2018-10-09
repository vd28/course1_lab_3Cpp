/*	
Назовите тип unsigned long int именем ULONG, а long double по своему усмотрению.

author : Dubina Vlad
created : 09.10.2018
uppdated : 09.10.2018
*/

#include <iostream>
using namespace std;

typedef unsigned long int ULONG;
typedef long double DLONG;

int main() {

	ULONG length = 1231;
	cout << length << endl;

	DLONG length2 = 123.43;
	cout << length2 << endl;

	cin.ignore();
	return 0;

}