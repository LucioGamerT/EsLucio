#include <iostream>
#include <cstring>
#pragma warning(disable : 4996)
using namespace std;

void titolo_es() {
	cout << "Concatenare due stringhe:\n";
}

char concatena(char a[], char b[], char c[]) {
	strcat_s(c, a);		//deprecated e devo usa i puntatori
	strcat_s(c, b);
	return 0;
}


int main()
{
	titolo_es();
	int scelta = 0;
	char str1[256], str2[256], str_tot[612];

	do {

		cout << "Scrivere la prima stringa: ";
		cin.getline(str1, 256, '\n');
		cout << "Scrivere ora la seconda stringa: ";
		cin.getline(str2, 256, '\n');

		concatena(str1, str2, str_tot);
		cout << "La stringa risultante e': " << str_tot << "\n\n";
		cout << "Si desidera ripetere l'operazione? Se si' digitare 1 altrimenti digitare 0: ";
		cin >> scelta;
		if (scelta == 1) {
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			cout << "\n";
		}
	} while (scelta == 1);
	return 0;
}
